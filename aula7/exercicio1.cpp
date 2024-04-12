#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Insira um numero" << endl;
	string numero;
	cin >> numero;
	reverse(numero.begin(), numero.end());
	cout << numero << endl;
}