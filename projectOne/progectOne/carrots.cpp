// carrots.cpp -- программа по технологии производства пищевых продуктов
// использует и отображает переменную

#include <iostream>

int main() {

	using namespace std;
	
	int carrots, pazzle;			// объявление переменной

	carrots = 25;					// присваевание переменной значения
	pazzle = 20;
	cout << "I have ";
	cout << carrots;				// отображение значения переменной
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;			// изменение переменной
	pazzle = pazzle - 3;			// изменение переменной pazzle
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
	cout << "Pazzle = " << pazzle << "." << endl;

	cin.get();
	cin.get();

	return 0;
}