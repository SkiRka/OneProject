// trmperatura.cpp -- переводи цильсии и фаренгейты

#include <iostream>

int main(){

	using namespace std;

	// По Фаренгейты в Цельсии
	// вводим температуру в Фаренгейтах
	cout << "Введите температуру в фаренгейтах: ";
	double far;
	cin >> far;

	// переводим Фаренгейт -> Цельсии
	double celsii;
	double n;
	n = (double)5 / (double)9;
	celsii = (far - 32) * n;
	
	// выводим
	cout << "Температура по Фаренгейту = " << far 
		 << " равна по Цельсию = " << celsii << endl;

	cout << endl;	// разделитель
	// По Цельсию в Фаренгейты
	cout << "Введите температуру в цельсиях: ";
	cin >> celsii;
	
	// переводим Цельсии -> Фаренгейты
	far = (celsii / n) + 32;

	// выводим
	cout << "Температура по Цельсию = " << celsii
		 << " равна по Фаренгейту = " << far << endl;

	cin.get();
	cin.get();

	return 0;
}