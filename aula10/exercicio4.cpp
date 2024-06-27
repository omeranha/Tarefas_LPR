#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, int> cidades = {
		{ "srs", 100}, { "sp", 11000 }, { "rj", 10000 }
	};

	int media = 0;
	for (const auto& cidade : cidades) {
		media += cidade.second;
	}
	media /= cidades.size();

	cout << "acima da media:\n";
	for (const auto &cidade : cidades) {
		if (cidade.second > media) {
			cout << cidade.first << endl;
		}
	}

	int menor = INT_MAX, maior = 0;
	string nomemenor, nomemaior;
	for (const auto& cidade : cidades) {
		if (menor > cidade.second) {
			menor = cidade.second;
			nomemenor = cidade.first;
		} else if (maior < cidade.second) {
			maior = cidade.second;
			nomemaior = cidade.first;
		}
	}

	cout << "\nmenor cidade: " << nomemenor << endl;
	cout << "maior cidade: " << nomemaior << endl;
	int populacao = 0;
	cin >> populacao;
	for (const auto& cidade : cidades) {
		if (cidade.second == populacao) {
			cidades.erase(cidade.first);
		}
	}

	cout << "\ndicionario atualizado:\n";
	for (const auto& cidade : cidades) {
		cout << cidade.first << " " << cidade.second << endl;
	}
}
