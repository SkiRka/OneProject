// colco.cpp -- выводит площадь кругов

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	double pi = 3.14;

	// вводим данные
	cout << "Введите радиусы: ";
	int pervi_r, vtoroi_r;
	cin >> pervi_r
		>> vtoroi_r;
	if (pervi_r >= vtoroi_r){
		double plosad_s1,plosad_s2,plosad_s3;
		plosad_s1 = pi * pow(pervi_r,2);
		plosad_s2 = pi * pow(vtoroi_r,2);
		plosad_s3 = plosad_s1 - plosad_s2;
		// выводим данные
		cout << "Площадь первого = " << plosad_s1 << endl;
		cout << "Площадь второго = " << plosad_s2 << endl;
		cout << "Площадь кольца = " << plosad_s3 << endl;
	} else {
		cout << "Радиус первого, меньше радиуса второго" << endl;
	}

	cin.get();
	cin.get();

	return 0;
}