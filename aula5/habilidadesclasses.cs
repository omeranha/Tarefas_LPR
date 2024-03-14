using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exercicioscsharp {
	internal class Program {
		static void Main(string[] args) {
			Console.WriteLine("Qual sua classe? (guerreira, mago ou arqueira)");
			switch (Console.ReadLine()) {
				case "guerreira":
					Console.WriteLine("Suas habilidades são: Ataque pesado, Defesa total");
					break;
				case "mago":
					Console.WriteLine("Suas habilidades são: Bola de fogo, Escudo de gelo");
					break;
				case "arqueira":
					Console.WriteLine("Suas habilidades são: Flecha precisa, Disparo triplo");
					break;
			}
			Console.ReadKey();
		}
	}
}
