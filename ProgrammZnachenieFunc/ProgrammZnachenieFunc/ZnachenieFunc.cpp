// znacheniefunc.cpp -- программа рашает заданную функцию уравнения

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// вводим x
	cout << "Введите x: ";
	int x;
	cin >> x;

	// решаем функцию
	int func;
	func = 3 * pow(x,6) - 6 * pow(x,2) - 7;

	// выводим 
	cout << "Функция 3x^6 - 6x^2 - 7, при x = " << x << " равна " << func << endl;

	cin.get();
	cin.get();

	return 0;
}