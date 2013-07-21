// proizvod.cpp -- находит произведение 

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// вводим число A
	cout << "Введите A: ";
	int a;
	cin >> a;

	// находим
	int proizvod;
	proizvod = pow(a,2);
	proizvod = pow(proizvod,2);
	proizvod = pow(proizvod,2);

	// выводим 
	cout << "Произведение A^8 = " << proizvod << endl;


	cin.get();
	cin.get();

	return 0;
}