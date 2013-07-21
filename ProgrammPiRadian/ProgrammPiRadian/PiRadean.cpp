// piradean.cpp -- определяет значение в радианах

#include <iostream>

int main(){

	using namespace std;

	// вводим значение угла в градусах
	cout << "Введите значение угла в градусах: ";
	int gradusi;
	cin >> gradusi;

	// pi
	double pi = 3.14;

	// находим 
	if (gradusi <= 360 && gradusi >= 0){
		double znacheni_G;
		znacheni_G = gradusi * (pi / 180);
		cout << "Значение в радианах = " << znacheni_G << endl;
	} else cout << "Неподходит" << endl;

	cin.get();
	cin.get();


	return 0;
}