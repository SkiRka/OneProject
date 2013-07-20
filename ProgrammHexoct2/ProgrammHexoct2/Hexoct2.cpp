// hexoct2.cpp --  отображает значения в шестнадцатиричной и восьмиричной форме

#include <iostream>

using namespace std;

int main(){

	using namespace std;

	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;	// манипулятор для изменения основания системы счиселния
	cout << "waist = " << waist << " (hex for 42)" << endl;
	cout << oct;	// манипулятор для изменения основания системы счисления
	cout << "inseam = " << inseam << " (octal for 42)" << endl;


	cin.get();
	cin.get();

	return 0;
}