// znachenie.cpp -- находит значение заданной функции

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// вводим x
	cout << "Введите значение x: ";
	int x;
	cin >> x;

	// находим 
	int func;
	func = 4 * pow(x-3,6) - 7 * pow(x-3,3) + 2;

	// выводим
	cout << "Функция 4(x-3)^6 - 7(x-3)^3 + 2, при x = " << x << " равна " << func << endl;

	cin.get();
	cin.get();

	return 0;
}