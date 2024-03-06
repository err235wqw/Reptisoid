//                   ___  _____ ______                       
//    ___  _________|__ \|__  // ____/      ______ __      __
//   / _ \/ ___/ ___/_/ / /_ </___ \| | /| / / __ `/ | /| / /
//  /  __/ /  / /  / __/___/ /___/ /| |/ |/ / /_/ /| |/ |/ / 
//  \___/_/  /_/  /____/____/_____/ |__/|__/\__, / |__/|__/  
//                                            /_/            ⠀
//⣿⣿⣿⠟⠛⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⢋⣩⣉⢻
//⣿⣿⣿⠀⣿⣶⣕⣈⠹⠿⠿⠿⠿⠟⠛⣛⢋⣰⠣⣿⣿⠀⣿
//⣿⣿⣿⡀⣿⣿⣿⣧⢻⣿⣶⣷⣿⣿⣿⣿⣿⣿⠿⠶⡝⠀⣿
//⣿⣿⣿⣷⠘⣿⣿⣿⢏⣿⣿⣋⣀⣈⣻⣿⣿⣷⣤⣤⣿⡐⢿
//⣿⣿⣿⣿⣆⢩⣝⣫⣾⣿⣿⣿⣿⡟⠿⠿⠦⠀⠸⠿⣻⣿⡄⢻
//⣿⣿⣿⣿⣿⡄⢻⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣾⣿⣿⣿⣿⠇⣼
//⣿⣿⣿⣿⣿⣿⡄⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣰
//⣿⣿⣿⣿⣿⣿⠇⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢀⣿
//⣿⣿⣿⣿⣿⠏⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿
//⣿⣿⣿⣿⠟⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⣿
//⣿⣿⣿⠋⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⣿
//⣿⣿⠋⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢸
//⣿⠏⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡯⢸
//18-19-6
using System;
using System.Collections.Generic;
using System.Collections;
using System.IO;
using System.Diagnostics;
using System.Data;
using System.Linq;
using System.Runtime.InteropServices;
using System.Reflection;
using System.Net.Http.Headers;
using System.Runtime.Serialization.Formatters.Binary;
using System.Xml.Linq;
using System.Text.RegularExpressions;



namespace n_18_19
{
    class Program
    {
        public const string binSerPath = "expproduct.dat";
        public const string txtInputPath = "products.txt";
        static void Main()
        {
            List<Product> products = new List<Product>();
            BinaryFormatter formatter = new BinaryFormatter();
            if (!File.Exists(binSerPath) || new FileInfo(binSerPath).Length == 0)
            {
                products = LoadProductsFromFile(txtInputPath);//Список продуктов
            }
            else
            {
                using (FileStream fin = new FileStream(binSerPath, FileMode.Open))
                {
                    products = (List<Product>)formatter.Deserialize(fin);
                }
            }
            foreach (var product in products)//Выводим всю инфу о продуктах
            {
                Console.WriteLine(product);
                Console.WriteLine();
            }

            DateTime currentDate = DateTime.Now;//Обозначаем сегодня
            var expiredProducts = products.FindAll(product => product.IsExpired(currentDate.ToString("yyyy-MM-dd")));//Создаем массив просрочки


            //сериализация
            using (FileStream fout = new FileStream(binSerPath, FileMode.OpenOrCreate))
            {
                formatter.Serialize(fout, products);
                fout.Close();
            }
            Console.WriteLine("Продукты с истекшим сроком хранения:");//Сразу выводим плохие
            foreach (var product in expiredProducts)
            {
                Console.WriteLine(product);
                Console.WriteLine();
            }

            Console.WriteLine();
            Console.WriteLine("Отсортированные продукты:");

            products.Sort();//Сортируем все продукты
            foreach (var product in products)
            {
                Console.WriteLine(product);
                Console.WriteLine();
            }
        }

        static List<Product> LoadProductsFromFile(string filePath)//Функция загрузки из файла
        {
            List<Product> products = new List<Product>();
            string[] lines = File.ReadAllLines(filePath);

            foreach (string line in lines)
            {
                string[] data = line.Split(',');

                string productType = data[0];
                string name = data[1];
                int price = Convert.ToInt32(data[2]);

                switch (productType)
                {
                    case "SingleProduct":
                        string productionDate = data[3];
                        string expiryDate = data[4];
                        products.Add(new SingleProduct(name, price, productionDate, expiryDate));
                        break;

                    case "Batch":
                        int quantity = Convert.ToInt32(data[3]);
                        productionDate = data[4];
                        expiryDate = data[5];
                        products.Add(new Batch(name, price, quantity, productionDate, expiryDate));
                        break;

                    case "Set":
                        // создаём экземпляр класса сет и добавляем элементы в его лист
                        Set set = new Set(name, price);
                        set.Products = new List<Product>();

                        for (int i = 3; i < data.Length; i += 4)
                        {
                            SingleProduct prod1 = new SingleProduct(data[i], Convert.ToInt32(data[i + 1]), data[i + 2], data[i + 3]);
                            set.Products.Add(prod1);
                        }

                        products.Add(set);


                        break;
                }
            }
            return products;
        }
    }
}
