using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exercicioscsharp {
	internal class Program {
		static void Main(string[] args) {
			Console.WriteLine("Insira um número");
			if (int.Parse(Console.ReadLine()) % 2 == 0) {
				Console.WriteLine("O número é par");
			} else {
				Console.WriteLine("O número é impar");
			}
			Console.ReadKey();
		}
	}
}
