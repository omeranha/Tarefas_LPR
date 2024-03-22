using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exercicioscsharp {
	internal class Program {
		static void Main(string[] args) {
			int aleatorio = new Random().Next(1, 100);
			Console.WriteLine("Chute o valor aleatório gerado pelo código");
			Console.WriteLine("valor gerado {0}", aleatorio);
			int chute = int.Parse(Console.ReadLine());
			do {
				if (chute == aleatorio) {
					Console.WriteLine("Acertou.");
				} else if (chute < aleatorio) {
					Console.WriteLine("Chutou baixo");
				} else {
					Console.WriteLine("Chutou alto");
				}
				chute = int.Parse(Console.ReadLine());
			} while(chute != aleatorio);
			Console.WriteLine("Acertou.");
			Console.ReadKey();
		}
	}
}
