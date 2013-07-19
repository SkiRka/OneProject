// dlinaokrug -- выводит длину окружности

#include <iostream>

int main(){

	using namespace std;

	double pi, deametr, dlina;

	pi = 3.14;
	cout << "Enter deametr: ";
	cin >> deametr;
	dlina = pi * deametr;
	cout << "Dlina = " << dlina << endl;

	cin.get();
	cin.get();

	return 0;
}