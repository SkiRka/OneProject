// nenol.cpp -- находит сумму, разность и произведение не нулевых чисел

#include <iostream>

int main(){

	using namespace std;

	// вводим два не нулувых числа
	cout << "Введите два не нулевых числа: ";
	int pervoe, vtoroe;
	cin >> pervoe
		>> vtoroe;
	int obshee;
	obshee = pervoe + vtoroe;
	cout << "Сумма = " << obshee << endl;
	obshee = pervoe - vtoroe;
	cout << "Разность = " << obshee << endl;
	obshee = pervoe * vtoroe;
	cout << "Произведение = " << obshee << endl;
	obshee = pervoe / vtoroe;
	cout << "Частное = " << obshee << endl;

	cin.get();
	cin.get();

	return 0;
}