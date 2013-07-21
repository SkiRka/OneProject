// chetnost.cpp -- программа пишет True, если число четное

#include <iostream>

int main(){

	using namespace std;

	// вводим число
	cout << "Введите число: ";
	int chislo;
	cin >> chislo;

	// проверяем на чётность
	int chetnoe;
	chetnoe = chislo % 2;
	if (chetnoe == 0){
		cout << "True" << endl;
	} else{
		cout << "False" << endl;
	}

	cin.get();
	cin.get();

	return 0;
}