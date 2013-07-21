// geron.cpp -- находим площадь и периметр

#include <iostream>
#include <cmath>

int main(){

	using namespace std;
	
	// вводим координаты
	cout << "Введите коррдинаты трех вершин: ";
	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1
		>> x2 >> y2 
		>> x3 >> y3;
	
	// находим a, b, c
	int a, b, c;
	a = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
	b = sqrt(pow(x3 - x2,2) + pow(y3 - y1,2));
	c = sqrt(pow(x1 - x3,2) + pow(y1 - y3,2));
	int perimetr_T;	// полупириметр
	perimetr_T = (a + b + c) / 2;
	int plosad_T;	// площадь треугольника
	plosad_T = sqrt(perimetr_T*((perimetr_T - a) * (perimetr_T - b) * (perimetr_T - c)));

	// выводим результат
	cout << "Периметр = " << a + b + c << endl
		 << "Площадь = " << plosad_T << endl;

	cin.get();
	cin.get();

	return 0;
}