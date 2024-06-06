#include <iostream>

int main() {
	int numeros[10] = {};
	for (int i = 0; i < 10; i++) {
		std::cout << "digite um numero\n";
		std::cin >> numeros[i];
	}

	int numero = 0;
	std::cout << "pesquise um numero no vetor\n";
	std::cin >> numero;
	for (int i = 0; i < 10; ++i) {
		if (numero == numeros[i]) {
			std::cout << "numero " << numero << "encontrado na posicao " << i << std::endl;
		}
	}
}
