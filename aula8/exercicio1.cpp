#include <iostream>

int main() {
	int numeros[10] = {};
	for (int i = 0; i < 10; ++i) {
		std::cout << "digite um numero\n";
		std::cin >> numeros[i];
	}

	int pares[10] = {};
	int impares[10] = {};
	for (int i = 0; i < 10; ++i) {
		if (numeros[i] % 2 == 0) {
			pares[i] = numeros[i];
		}
		else {
			impares[i] = numeros[i];
		}
	}

	std::cout << "pares: ";
	for (int i = 0; i < 10; ++i) {
		if (pares[i] != 0) {
			std::cout << pares[i] << " ";
		}
	}

	std::cout << "impares: ";
	for (int i = 0; i < 10; ++i) {
		if (impares[i] != 0) {
			std::cout << impares[i] << " ";
		}
	}
}
