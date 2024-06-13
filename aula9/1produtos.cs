using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exercicioscsharp {
	internal class Program {
		public struct Product
		{
			public string name;
			public string id;
			public double price;
			public int amount;
		}

		public static void Main(string[] args)
		{
			Product[] products = new Product[3];
			double totalValue = 0;

			for (int i = 0; i < 3; ++i) {
				Product product = products[i];
				Console.WriteLine("insira os dados do produto {0}", i + 1);
				Console.WriteLine("nome");
				product.name = Console.ReadLine();
				Console.WriteLine("codigo");
				product.id = Console.ReadLine();
				Console.WriteLine("preco");
				product.price = double.Parse(Console.ReadLine());
				Console.WriteLine("quantidade");
				product.amount = int.Parse(Console.ReadLine());
				totalValue += product.price * product.amount;
			}
			Console.WriteLine("o valor total de produtos e: {0}", totalValue);
		}
	}
}
