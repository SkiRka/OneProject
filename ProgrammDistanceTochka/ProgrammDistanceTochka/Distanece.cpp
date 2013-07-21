// distance.cpp -- находим расстояние между двумя точками

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// вводим коррдинаты точек
	cout << "Введите координаты точек: ";
	int x1, x2, y1, y2;
	cin >> x1
		>> y1
		>> x2
		>> y2;

	// вычисляем расстояние 
	int distance;
	distance = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

	// выводим результат
	cout << "Расстояние = " << distance << endl;

	cin.get();
	cin.get();

	return 0;
}