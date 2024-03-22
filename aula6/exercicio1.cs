using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exercicioscsharp {
	internal class Program {
		static void Main(string[] args) {
			Console.WriteLine("Digite a quantidade de numeros");
			int quantidadenumeros = int.Parse(Console.ReadLine());
			List<int> numeros = new List<int>();
			double soma = 0;

			for (int i = 0; i < quantidadenumeros; i++){
				Console.WriteLine("Insira um numero");
				int numero = int.Parse(Console.ReadLine());
				if (numero % 2 != 0) {
					Console.WriteLine("Numero impar ignorado");
					continue;
				}
				Console.WriteLine(numero);
				numeros.Add(numero);
				soma += numero;
			}
			Console.WriteLine("A media dos valores é: {0:F1}", soma / numeros.Count);
			Console.ReadKey();
		}
	}
}
