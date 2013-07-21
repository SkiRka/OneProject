// confeti.cpp -- задача

#include <iostream>

int main(){

	using namespace std;

	// вводим x кг
	cout << "Введите количество киллограм конфет: ";
	int Xkg_confet;
	cin >> Xkg_confet;
	
	// вводим стоимость x кг
	cout << "Введите их стоимость: ";
	int stoimost_Xkg;
	cin >> stoimost_Xkg;

	// вводим y кг
	cout << "Введите Y кг, чтобы узнать их стоимость: ";
	int Ykg_confet;
	cin >> Ykg_confet;

	// выводим стоимость 1 кг и y кг
	int kg_stoim = stoimost_Xkg / Xkg_confet;
	cout << "Стоимость 1 кг конфет = " << kg_stoim << endl
		 << "Стоимость " << Ykg_confet << " = " << kg_stoim * Ykg_confet << endl;

	cin.get();
	cin.get();

	return 0;
}