// carrots.cpp -- программа по технологии производства пищевых продуктов
// использует и отображает переменную

#include <iostream>

int main() {

	using namespace std;
	
	int carrots;					// объявление переменной

	carrots = 25;					// присваевание переменной значения
	cout << "I have ";
	cout << carrots;				// отображение значения переменной
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;			// изменение переменной
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

	cin.get();
	cin.get();

	return 0;
}