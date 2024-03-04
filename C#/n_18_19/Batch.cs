using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace n_18_19
{
    [Serializable]
    class Batch : Product
    {


        protected string Name;
        protected int Price;
        protected int Quantity;
        protected string Production_Date;
        protected string Expiry_Date;

        public override int Cost
        {
            get
            {
                return Price;
            }
        }
        public Batch(string name, int price, int quantity, string productionDate, string expiryDate) : base(name)
        {
            this.Name = name;
            this.Price = price;
            this.Quantity = quantity;
            this.Production_Date = productionDate;
            this.Expiry_Date = expiryDate;
        }

        public override string ToString()
        {
            return ($"Наименование партии: {Name} \n Цена: {Price} \n Количество продуктов в партии: {Quantity} \n Дата производства: {Production_Date} \n Конец срока годности: {Expiry_Date}");
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

