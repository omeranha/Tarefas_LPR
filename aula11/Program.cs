using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace POO {
	internal class Program {
		static void Main(string[] args)
		{
			Retangulo retangulo = new();
			Console.WriteLine("Insira a altura e a largura do retangulo, respectivamente");
			retangulo.altura = double.Parse(Console.ReadLine());
			retangulo.largura = double.Parse(Console.ReadLine());
			Console.WriteLine("Area do retangulo: {0} perimetro do retangulo: {1}", retangulo.calcArea(), retangulo.calcPerimetro());
			Console.ReadLine();
		}
	}
}
