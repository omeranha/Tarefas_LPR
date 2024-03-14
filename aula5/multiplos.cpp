#include <iostream>
using namespace std;

int main() {
	cout << "Insira dois numeros:" << endl;
	int primeironumero = 0;
	int segundonumero = 0;
	cin >> primeironumero;
	cin >> segundonumero;
	if (primeironumero % segundonumero == 0 || segundonumero % primeironumero == 0) {
		cout << "Os numeros sao multiplos";
	} else {
		cout << "Os numeros nao sao multiplos";
	}
}
