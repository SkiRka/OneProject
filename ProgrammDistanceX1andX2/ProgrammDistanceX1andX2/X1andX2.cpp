// x1andx2.cpp -- выводит расстояние между двумя точками

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// вводим координаты точек
	cout << "Введите координаты первой точки: ";
	int pervay_T;
	cin >> pervay_T;
	cout << "Введите координаты второй точки: ";
	int vtoroe_T;
	cin >> vtoroe_T;

	// находим расстояние
	int distance_T;
	distance_T = abs(vtoroe_T - pervay_T);

	// выводим результат 
	cout << "Расстояние = " << distance_T << endl;

	cin.get();
	cin.get();

	return 0;
}