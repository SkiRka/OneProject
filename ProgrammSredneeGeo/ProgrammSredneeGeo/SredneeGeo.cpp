// sredneegeo.cpp -- вычисляет среднее геометрическое двух чисел

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	cout << "Введите два неотрицательных числа: " << endl;
	unsigned int pervoe, vtoroe;
	cin >> pervoe
		>> vtoroe;
	unsigned int srednee_Geo = sqrt(pervoe * vtoroe);

	cout << "Среднее геометрическое = " << srednee_Geo << endl;

	cin.get();
	cin.get();

	return 0;
}