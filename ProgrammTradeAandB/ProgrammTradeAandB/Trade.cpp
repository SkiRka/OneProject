// trade.cpp -- поментяь местами a и b

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// введите а and b
	cout << "Введите а и b: ";
	int a, b;
	cin >> a
		>> b;
	cout << "A = " << a << endl
		 << "B = " << b << endl;

	// меняем их местами 
	a = b + a;
	b = a - b;
	a = a - b;

	cout << endl; // разделитель строк

	// выводим результат 
	cout << "A = " << a << endl
		 << "B = " << b << endl;

	cin.get();
	cin.get();

	return 0;
}