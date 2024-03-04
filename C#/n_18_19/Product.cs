using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace n_18_19
{

    [Serializable]
    abstract class Product : IComparable<Product>
    {

        public string Name_Product { get; set; }

        public int CompareTo(Product item)
        {
            return this.Cost.CompareTo(item.Cost);
        }
        public Product(string name)
        {
            this.Name_Product = name;
        }
        public abstract bool IsExpired(string currentDate);
        public abstract int Cost { get; }
    }
}
