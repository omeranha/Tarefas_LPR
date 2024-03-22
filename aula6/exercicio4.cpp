#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Insira um numero" << endl;
	int numero = 0;
	cin >> numero;
	string snumero = to_string(numero * numero);
	int soma = 0;
	for (int i = 0; i < snumero.length(); i++) {
		soma += snumero[i] - '0';
	}
	cout << "O resultado da soma entre os digitos: " << soma << endl;
}