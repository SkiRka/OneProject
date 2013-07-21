// trade.cpp -- меняет местами a and b and c

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// Вводим a and b and c
	cout << "Введите A, B, C: ";
	int A, B, C;
	cin >> A
		>> B
		>> C;
	cout << "A = " << A << endl
		 << "B = " << B << endl
		 << "C = " << C << endl;

	cout << endl;	// разделитель

	// переставляем местами
	int D;
	D = C;
	C = B;
	B = A;
	A = D;

	// выводим 
	cout << "A = " << A << endl 
		 << "B = " << B << endl 
		 << "C = " << C << endl ;

	cin.get();
	cin.get();


	return 0;
}