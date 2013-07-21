// rands.cpp -- программа находит радиус окружности и площадь круга вписанного в окружность

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	double pi = 3.14;

	// вводим данные
	cout << "Введите длину окружности: ";
	int dlina_O;
	cin >> dlina_O;

	// находим радиус и площадь
	double radius_O, plosad_K;
	radius_O = dlina_O / (2 * pi);
	plosad_K = pi * pow(radius_O,2);

	// выводим ответ
	cout << "Радиус = " << radius_O << endl;
	cout << "Площадь = " << plosad_K << endl;

	cin.get();
	cin.get();

	return 0;
}