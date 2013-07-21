// dlinaotrezka.cpp -- выводит длины заданных отрезков и их сумму

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// вводим три точки
	cout << "Введите три точки A, B, C: ";
	int A, B, C;
	cin >> A
		>> B
		>> C;

	// находим длины отрезков и их сумму
	int AC, BC;
	if (A < C){
		AC = C - A;
	} else {
		AC = A - C;
	}
	if (B < C){
		BC = C - B;
	} else {
		BC = B - C;
	}
	int sum_ACBC;
	sum_ACBC = AC + BC;

	// выводим результат
	cout << "Длина AC = " << AC << endl
		 << "Длина BC = " << BC << endl
		 << "Сумма = " << sum_ACBC
		 << endl;

	cin.get();
	cin.get();

	return 0;
}