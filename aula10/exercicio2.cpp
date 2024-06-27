#include <iostream>
#include <list>

bool isEven(int number) {
	return number % 2 == 0;
}

int main() {
	std::list<int> list;
	for (int i = 0; i < 100; ++i) {
		list.emplace_back(rand() % 100);
	}

	list.sort();
	std::cout << "lista de numeros\n";
	for (int number : list) {
		std::cout << number << " ";
	}

	list.remove_if(isEven);
	std::cout << "\nlista sem os numeros pares\n";
	for (int number : list) {
		std::cout << number << " ";
	}

	std::list<int> repeated;
	for (int number : list) {
		if (std::count(list.begin(), list.end(), number) > 1) {
			repeated.emplace_back(number);
		}
	}

	std::cout << "\nlista de numeros repetidos\n";
	for (int number : repeated) {
		std::cout << number << " ";
	}
}
