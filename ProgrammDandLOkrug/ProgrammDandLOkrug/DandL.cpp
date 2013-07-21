// dandl.cpp -- программа выводит диаметр и длину окружности

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// вводим площадь окружности
	cout << "Введите площадь окружности: ";
	int plosad_O;
	cin >> plosad_O;

	// находим диаметр и длину
	double pi = 3.14, diametr_O, dlina_O;
	diametr_O = 2 * sqrt(plosad_O / pi);
	dlina_O = pi * diametr_O;

	// выводим ответ 
	cout << "Диаметр = " << diametr_O << endl;
	cout << "Длина = " << dlina_O << endl;

	cin.get();
	cin.get();

	return 0;
}