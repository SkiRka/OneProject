// trade.cpp -- поментяь метами содержимое

#include <iostream>

int main(){

	using namespace std;

	// вводим данные
	cout << "Введите A and B and C: ";
	int a, b, c;
	cin >> a
		>> b
		>> c;
	cout << "A = " << a << endl
		 << "B = " << b << endl
		 << "C = " << c << endl;

	cout << endl;	// разделитель

	// меняем местами
	int d;
	d = c;
	c = a;
	a = b;
	b = d;

	// выводим 
	cout << "A = " << a << endl
		 << "B = " << b << endl
		 << "C = " << c << endl;

	cin.get();
	cin.get();

	return 0;	
}