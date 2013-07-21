// shokolad.cpp -- задача

#include <iostream>

int main(){

	using namespace std;

	// данные шоколада
	cout << "Введите количество кг шоколада: ";
	int kg_shokolad;
	cin >> kg_shokolad;
	cout << "Введите стоимость этих кг: ";
	int stoimost_kgShokolad;
	cin >> stoimost_kgShokolad;

	// данные ириски
	cout << "Введите количество кг ирисок: ";
	int kg_irisok;
	cin >> kg_irisok;
	cout << "Введеите стоимость этих кг: ";
	int stoimost_kgIrisok;
	cin >> stoimost_kgIrisok;

	// находим сколько стоит кг и их разницу
	int kg1_sh, kg1_iris;
	kg1_sh = stoimost_kgShokolad / kg_shokolad;
	kg1_iris = stoimost_kgIrisok / kg_irisok;
	
	// Разница
	double raznica;
	if (kg1_sh > kg1_iris){
		raznica = kg1_sh / kg1_iris;		
	} else {
		raznica = kg1_iris / kg1_sh;
	}

	// выводим
	cout << "Стоимость 1 кг шоколада = " << kg1_sh << endl
		 << "Стоимость 1 кго ирисок = " << kg1_iris << endl
		 << "Разница в цене = " << raznica << endl;

	cin.get();
	cin.get();
	
	return 0;
}