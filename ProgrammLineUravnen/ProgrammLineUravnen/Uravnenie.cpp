// uravnenie.cpp -- линейное уравнение

#include <iostream>

int main(){

	using namespace std;

	// вводим а и b
	cout << "Введите a(не нулевой коофициент) and b: ";
	int a, b;
	cin >> a
		>> b;

	// выводим
	int x;
	x = -b / a;
	cout << "Уравнение A*x + B = 0, где x =  " << x << endl; 

	cin.get();
	cin.get();

	return 0;
}