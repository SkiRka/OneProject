// coribki.cpp -- задача

#include <iostream>

int main(){

	using namespace std;

	// вводим размеры ящика и коробки с товаром
	cout << "Размеры ящика: ";
	int L, M, N;
	cin >> L
		>> M
		>> N;
	cout << "Размеры коробки: ";
	int P, Q, R;
	cin >> P
		>> Q
		>> R;

	// находим результат
	int rezultat;
	L /= R;
	M /= Q;
	N /= P;
	rezultat = L * M * N;

	// выводим 
	cout << "Результат = " << rezultat << endl;

	cin.get();
	cin.get();

	return 0;
}