// nenolabs.cpp -- находит сумму, разность, произведение и частное квадратов чисел

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// вводим два ненулевых числа
	cout << "Введите два числа: ";
	int pervoe, vtoroe;
	cin >> pervoe
		>> vtoroe;
	int obshee;
	obshee = pow(pervoe,2) + pow(vtoroe,2);
	cout << "Сумма = " << obshee << endl;
	obshee = pow(pervoe,2) - pow(vtoroe,2);
	cout << "Разность = " << obshee << endl;
	obshee = pow(pervoe,2) * pow(vtoroe,2);
	cout << "Произведение = " << obshee << endl;
	obshee = pow(pervoe,2) / pow(vtoroe,2);
	cout << "Частное = " << obshee << endl;

	cin.get();
	cin.get();

	return 0;
}