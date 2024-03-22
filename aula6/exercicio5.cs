using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exercicioscsharp {
	internal class Program {
		static void Main(string[] args) {
			string[] semana = { "segunda-feira", "terça-feira", "quarta-feira", "quinta-feira", "sexta-feira" };
			int horasTreinamento = 0;
			foreach (string dia in semana) {
				Console.WriteLine("Quantas horas você treinou na {00}", dia);
				int horas = int.Parse(Console.ReadLine());
				horasTreinamento += horas;
			}
			int semanas = 1000 / horasTreinamento;
			Console.WriteLine("Você demoraria {0} semanas para alcançar 1000 horas de treinamento", semanas);
			Console.WriteLine("Ou {0} dias", semanas * 5);
			Console.WriteLine("Ou {0:F1} meses", semanas / 4.5);
			Console.ReadKey();
		}
	}
}
