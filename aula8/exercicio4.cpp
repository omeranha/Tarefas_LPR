#include <iostream>

int main() {
	int a[3][3];
	int b[3][3];
	int resultado[3][3] = {};

	std::cout << "insira os elementos da matriz a:\n";
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			std::cin >> a[i][j];
		}
	}

	std::cout << "insira os elementos da matriz b:\n";
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			std::cin >> b[i][j];
		}
	}

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; k++) {
				resultado[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	std::cout << "resultado:\n";
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			std::cout << resultado[i][j] << " ";
		}
		std::cout << "\n";
	}
}
