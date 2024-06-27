using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace aulascsharp
{
	internal class Program
	{
		static void Main(string[] args)
		{
			Dictionary<string, int> pessoas = new Dictionary<string, int> {
				{ "emanuel", 19 }, { "melissa", 18 }, { "jose", 10 }
			};

			int media = pessoas.Values.Sum() / pessoas.Count;
			Console.WriteLine(media);
			foreach (var pessoa in pessoas) {
				if (pessoa.Value > media) {
					Console.WriteLine(pessoa.Key);
				}
			}

			foreach (var pessoa in pessoas) {
				if (pessoa.Value == pessoas.Values.Min()) {
					Console.WriteLine("pessoa mais nova: {0}", pessoa.Key);
				}
				else if (pessoa.Value == pessoas.Values.Max()) {
					Console.WriteLine("pessoa mais velha: {0}", pessoa.Key);
				}
			}

			int idade = int.Parse(Console.ReadLine());
			Dictionary<string, int> novasPessoas = new Dictionary<string, int>();
			Console.WriteLine("dicionario atualizado:");
			foreach (var pessoa in pessoas) {
				if (pessoa.Value == idade) {
					novasPessoas.Add(pessoa.Key, pessoa.Value);
					Console.WriteLine(pessoa.Key);
				}
			}
		}
	}
}
