// vershini.cpp -- стороны прямоугольника

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// введите кординаты вершин
	cout << "Введите координаты вершин: ";
	int x1, x2, y1, y2;
	cin >> x1
		>> y1
		>> x2 
		>> y2;
	
	// находим периметр и площадь
	int perimetr, plosad;
	int a, b;
	a = abs(x2 - x1);
	b = abs(y2 - y1);
	perimetr = 2 * (a + b);
	plosad = a * b;

	// выводим 
	cout << "Периметр = " << perimetr << endl;
	cout << "Площадь = " << plosad << endl;

	cin.get();
	cin.get();

	return 0;
}