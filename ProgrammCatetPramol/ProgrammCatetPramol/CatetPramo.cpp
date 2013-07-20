// catetpramo.cpp -- находит гипотинузу и периметр прямоугольного треугольника

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// вводим два числа 
	cout << "Введите катеты треугольника: ";
	int katet1, katet2;
	cin >> katet1
		>> katet2;
	int gipotinuza_C, perimetr_P;
	gipotinuza_C = sqrt(pow(katet1,2) + pow(katet2,2));
	perimetr_P = katet1 + katet2 + gipotinuza_C;
	// выводим результат
	cout << "Гипотинуза = " << gipotinuza_C 
		 << " Периметр = " << perimetr_P 
		 << endl;
	cin.get();
	cin.get();

	return 0;
}