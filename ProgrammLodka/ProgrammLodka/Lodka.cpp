// lodka.cpp -- Задача

#include <iostream>

int main(){

	using namespace std;

	// вводим все данные
	cout << "Введите скорость лодки в стоячей воде: ";
	int stoy_V;
	cin >> stoy_V;
	cout << "Введите скорость течения реки: ";
	int techen_R;
	cin >> techen_R;
	if (stoy_V > techen_R){
		cout << "Введите время движения лодки по озеру: ";
		int ozero_T;
		cin >> ozero_T;
		cout << "Введите время движения по реке: ";
		int reka_T;
		cin >> reka_T;
		// находим путь
		int distance;
		distance = ozero_T * stoy_V;
		if (reka_T != 0){
			stoy_V = stoy_V - techen_R;
			distance = distance + (reka_T * stoy_V);
		}
		// выводим результат
		cout << "Путь = " << distance << endl;

	} else cout << "Неподходит" << endl;

	cin.get();
	cin.get();

	return 0;
}