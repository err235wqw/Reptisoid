using n_18_19;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace n_18_19
{
    [Serializable]
    class SingleProduct : Product
    {
        private string Name;
        private int Price;
        private string Production_Date;
        private string Expiry_Date;

        public override int Cost
        {
            get
            {
                return Price;
            }
        }


        public override string ToString()
        {
            return ($"Наименование товара: {Name} \n Цена: {Price} \n Дата производства: {Production_Date} \n Срок годности: {Expiry_Date}\n");
        }

        public SingleProduct(string name, int price, string productionDate, string expiryDate) : base(name)
        {
            this.Name = name;
            this.Price = price;
            this.Production_Date = productionDate;
            this.Expiry_Date = expiryDate;
        }

        public override bool IsExpired(string currentDate)
        {
            DateTime current_Date;
            if (DateTime.TryParse(currentDate, out current_Date))
            {
                DateTime expiryDate;
                if (DateTime.TryParse(Expiry_Date, out expiryDate))
                {
                    return current_Date > expiryDate;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
}


