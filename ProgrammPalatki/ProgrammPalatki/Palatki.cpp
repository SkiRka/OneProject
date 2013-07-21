// palatki.cpp -- задача

#include <iostream>

int main(){

	using namespace std;

	// вводим размеры палатки и площадки
	cout << "Введите размеры площадки NxM: ";
	int N, M;
	cin >> N
		>> M;
	cout << "Введите размеры палатки: ";
	int K;
	cin >> K;

	// находим сколько палаток может 
	// поместиться на данной площадке
	int count_razmer;
	N /= K;
	M /= K;
	count_razmer = M * N;

	// выводим результат
	cout << "Результат = " << count_razmer << endl;

	cin.get();
	cin.get();

	return 0;
}