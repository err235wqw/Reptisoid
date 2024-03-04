using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace n_18_19
{
    [Serializable]
    class Set : Product
    {

        protected string Name;
        protected int Price;
        public List<Product> Products;

        public Set(string name, int price) : base(name)
        {
            this.Name = name;
            this.Price = price;
            this.Products = new List<Product>();

        }
        public override int Cost
        {
            get
            {
                return Price;
            }
        }
        public override string ToString()
        {
            string productInfo = string.Join("\n", Products.Select(p => p.ToString()));
            return $"Название комплекта: {Name} \n \n Цена: {Price} \n Товары: \n{productInfo}";
        }

        public void AddProduct(Product product)
        {
            Products.Add(product);
        }

        public override bool IsExpired(string currentDate)
        {
            DateTime current_Date = DateTime.Now;
            return Products.Any(product => product.IsExpired(currentDate));
        }
    }
}