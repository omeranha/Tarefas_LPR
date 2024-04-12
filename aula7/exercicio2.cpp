#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

void mediaNumeros() {
	cout << "Digite a quantidade de numeros" << endl;
	int quantidadenumeros;
	cin >> quantidadenumeros;
	vector<int> numeros;
	double soma = 0;

	for (int i = 0; i < quantidadenumeros; i++) {
		cout << "Insira um numero" << endl;
		int numero;
		cin >> numero;
		if (numero % 2 != 0) {
			cout << "Numero impar ignorado" << endl;
			continue;
		}
		cout << numero << endl;
		numeros.push_back(numero);
		soma += numero;
	}
	cout << "A media dos valores: " << setprecision(4) << soma / numeros.size() << endl;
}

void chutarAleatorio() {
	srand(time(0));
	int aleatorio = rand() % 100 + 1;
	cout << "Chute o valor aleatorio gerado pelo codigo" << endl;
	int chute;
	do {
		cin >> chute;
		if (chute == aleatorio) {
			cout << "Acertou." << endl;
		}
		else if (chute < aleatorio) {
			cout << "Chutou baixo" << endl;
		}
		else {
			cout << "Chutou alto" << endl;
		}
	} while (chute != aleatorio);
	cout << "Acertou." << endl;
}

void resultadoSoma() {
	int soma = 0;
	for (int i = 49; i <= 500; i = i + 2) {
		if (i % 3 == 0) {
			soma += i;
		}
	}
	cout << "Resultado da soma: " << soma << endl;
}

int main() {
	cout << "Selecione uma opçao 1 - Media de numeros 2 - Chutar numeros aleatorios 3 - Resultado da soma" << endl;
	int opcao;
	cin >> opcao;
	switch (opcao) {
		case 1:
			mediaNumeros();
		break;
		case 2:
			chutarAleatorio();
		break;
		case 3:
			resultadoSoma();
		break;
	}
}
