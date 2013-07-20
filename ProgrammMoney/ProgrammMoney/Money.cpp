// mony.cpp -- вычисляет стоимость покупки 

#include <iostream>

int main(){
	
	using namespace std;

	// просим пользователя ввести нужные данные
	cout << "Введите количество учебников: ";
	int count;
	cin >> count;
	cout << "Введите стоимость учебников в руболях: ";
	int mony_ru;
	cin >> mony_ru;
	cout << "Введите стоимость учебников в копейках: ";
	int mony_coppek;
	cin >> mony_coppek;

	// находим нужнную сумму
	int obshee = 0;
	mony_ru *= count;
	mony_coppek *= count;
	obshee += mony_coppek / 100;
	obshee += mony_ru;
	mony_coppek %= 100;

	// выводим результат
	cout << "Сумма = " << obshee << " руб. " << mony_coppek << " коп." << endl;

	cin.get();
	cin.get();

	return 0;
}