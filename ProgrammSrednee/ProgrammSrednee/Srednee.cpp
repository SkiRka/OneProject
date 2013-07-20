// srednee -- среднее арифмитическое

#include <iostream>

int main(){

	using namespace std;

	cout << "Введите два числа: ";
	int pervoe, vtoroe;
	cin >> pervoe
		>> vtoroe;
	int srednee;
	srednee = (pervoe + vtoroe)/2;
	cout << "Среднее арифмитическое = " << srednee << endl;

	cin.get();
	cin.get();

	return 0;
}