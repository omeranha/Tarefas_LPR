#include <iostream>
using namespace std;

int main() {
	int soma = 0;
	for (int i = 49; i <= 500; i = i + 2) {
		if (i % 3 == 0) {
			soma += i;
		}
	}
	cout << "Resultado da soma: " << soma << endl;
}