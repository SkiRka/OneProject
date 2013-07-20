// sandl.cpp -- программа находит длину окружности и площадь круга

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	int pi = 3.14;
	int dlina_O;
	int plosad_S;

	cout << "Введте радиус R: ";
	int radius;
	cin >> radius;

	dlina_O = 2 * pi * radius;
	plosad_S = pi * pow(radius,2);
	
	cout << "Длина = " << dlina_O << endl;
	cout << "Площадь = " << plosad_S << endl;

	cin.get();
	cin.get();

	return 0;
}