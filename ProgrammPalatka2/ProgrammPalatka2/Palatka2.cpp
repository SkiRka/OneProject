// palatka2.cpp -- задача

#include <iostream>

int main(){
	
	using namespace std;

	// вводим размеры площадки и палатки
	cout << "Введите размеры площадки: ";
	int N, M;
	cin >> N
		>> M;
	cout << "Введите размеры палатки: ";
	int K, L;
	cin >> K
		>> L;

	// находим результат
	int rezultat;
	N /= L;
	M /= K;
	rezultat = N * M;
	
	// выводим результат
	cout << "Результат = " << rezultat << endl;


	cin.get();
	cin.get();

	return 0;
}
