// trade.cpp -- переводит радианы в градусы

#include <iostream>

int main(){

	using namespace std;

	// вводим угла в радианах
	cout << "Введите значение угла в радианах: ";
	int radiani;
	cin >> radiani;

	// pi
	double pi = 3.14;

	// находим 
	if (radiani <= (2 * pi) && radiani >= 0){
		int gradusi;
		gradusi = radiani * 180 / pi;
		cout << "Градуси = " << gradusi << endl;
	} else cout << "Неподходит" << endl;

	cin.get();
	cin.get();

	return 0;
}