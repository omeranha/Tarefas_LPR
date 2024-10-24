using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace POO {
	internal class Retangulo {
		public double altura;
		public double largura;

		public double calcArea()
		{
			return (altura * largura);
		}

		public double calcPerimetro()
		{
			return (2 * (altura + largura));
		}	
	}
}
