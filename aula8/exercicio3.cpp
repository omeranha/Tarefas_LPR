#include <iostream>

int main() {
	int cidades[4][4] = {
		{ 0, 524, 521, 882 },
		{ 524, 0, 434, 586 },
		{ 521, 434, 0, 429 },
		{ 882, 586, 429, 0 }
	};

	int origem = 0;
	int destino = 0;
	std::cout << "cidades:\n0 - Vitoria\n1 - Belo Horizonte\n2 - Rio de Janeiro\n3 - Sao paulo\n";
	do {
		std::cout << "insira a cidade de origem ";
		std::cin >> origem;
		std::cout << "insira a cidade de destino ";
		std::cin >> destino;

		int distancia = cidades[origem][destino];
		if (origem == destino) {
			std::cout << "cidade de origem igual a de destino\n";
			break;
		}
		std::cout << "distancia entre essas cidades: " << distancia << std::endl;
	} while (origem != destino);
}
