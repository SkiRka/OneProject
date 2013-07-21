// acandbc.cpp -- программа находит произведение AC и BC

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// введите три точки
	int A, B, C;
	cout << "Ввдте три точки: ";
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;
	cout << "C = ";
	cin >> C;
	

	// находим произведение
	int AC, BC, proizvod_ACBC;
	if (A < C && B > C){
		AC = C - A;
		BC = B - C;
	} else cout << "Неподходит" << endl;
	proizvod_ACBC = AC * BC;
	cout << "Произведение = " << proizvod_ACBC << endl;

	cin.get();
	cin.get();

	return 0;
}