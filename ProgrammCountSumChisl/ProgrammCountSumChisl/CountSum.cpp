// countsum.cpp -- выводи количество цифр в сумме чисел

#include <iostream>

int main(){

	using namespace std;

	// вводим два числа 
	cout << "Введите два числа: ";
	int chislo1, chislo2;
	cin >> chislo1
		>> chislo2;

	// находим количество
	int sum_Count;
	int schetchik = 0;
	sum_Count = chislo1 + chislo2;
	while (sum_Count != 0)
	{
		sum_Count /= 10;
		schetchik++;
	}

	// выводим
	cout << "Количество цифр в сумме = " << schetchik << endl;

	cin.get();
	cin.get();

	return 0;
}