#include <iostream>
using namespace std;

struct book {
	string title;
	string author;
	int year;
	int pages;
	double price;
};

int main() {
	book books[3];
	double totalprice = 0;

	cout << "insira os dados dos livros\n";
	for (int i = 0; i < 3; ++i) {
		book book = books[i];
		cout << "nome ";
		cin >> book.title;
		cout << "autor ";
		cin >> book.author;
		cout << "ano de lancamento ";
		cin >> book.year;
		cout << "numero de paginas ";
		cin >> book.pages;
		cout << "preco ";
		cin >> book.price;

		totalprice += book.price;
	}
	cout << "preco total dos livros: " << totalprice << " media do preco total: " << totalprice / 3;
}
