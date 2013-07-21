// sistemuravnenie.cpp -- системалинейных уравнений

#include <iostream>
#include <cmath>
int d(int,int,int,int);
int x(int,int,int,int);
int y(int,int,int,int);


int main(){

	using namespace std;

	// вводим данные
	cout << "Введите A1, B1, C1: ";
	int a1, b1, c1;
	cin >> a1
		>> b1
		>> c1;
	cout << "Введите A2, B2, C2: ";
	int a2, b2, c2;
	cin >> a2
		>> b2
		>> c2;

	// находим di
	int di = d(a1,b2,a2,b1);

	// находим x и y
	int xi = x(c1,b2,c2,b1);
	int yi = y(a1,c2,a2,c1);

	// выводим результат
	cout << endl;
	cout << endl;
	cout << "X = " << xi << endl
		 << "Y = " << yi << endl;

	cin.get();
	cin.get();

	return 0;
}

int d(int a1, int b2, int a2, int b1){
	int di = a1 * b2 - a2 * b1;
	return di;
}

int x(int c1, int b2, int c2, int b1){
	int xi = (c1 * b2 - c2 * b1)/14;
	return xi;
}

int y(int a1,int c2, int a2, int c1){
	int yi = (a1 * c2 - a2 * c1)/14;
	return yi;
}