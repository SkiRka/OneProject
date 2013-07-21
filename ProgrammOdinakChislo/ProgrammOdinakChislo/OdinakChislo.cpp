// odinakchislo.cpp -- программа проверяет все цифры в числе на соответствие

#include <iostream>

int main(){

	using namespace std;

	// вводим число
	cout << "Введите число: ";
	int chislo;
	cin >> chislo;

	if (chislo >= 10 && chislo <= 100){
		int chislo1, chislo2;
		chislo1 = chislo % 10;
		chislo2 = chislo / 10;
		if (chislo1 == chislo2){
			cout << "True" << endl;
		}
	} else{
		cout << "False" << endl;
	}

	cin.get();
	cin.get();

	return 0;
}