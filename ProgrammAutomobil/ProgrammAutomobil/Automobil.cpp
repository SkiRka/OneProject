// automobil.cpp -- задача

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// вводим данные про автомобили
	cout << "Введите скорость первого автомобиля: ";
	int skor_V1;
	cin >> skor_V1;
	cout << "Введите скорость второго автомобиля: ";
	int skor_V2;
	cin >> skor_V2;
	cout << "Введите расстояние между ними: ";
	int distance_S;
	cin >> distance_S;
	cout << "Введите время в пути: ";
	int time_S;
	cin >> time_S;

	// находим расстояние
	int obshe_S;
	int summar_V = skor_V1 + skor_V2;
	obshe_S = time_S * summar_V;
	int distance = abs(distance_S - obshe_S);

	// выводим
	cout << "Расстояние = " << distance << endl;

	cin.get();
	cin.get();

	return 0;
}