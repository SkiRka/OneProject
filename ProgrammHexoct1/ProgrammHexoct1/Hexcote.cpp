// hexoct1.cpp -- показвыет шестнадцатиричные и восьмиричные литералы

#include <iostream>

int main(){

	using namespace std;

	int chest = 42;		// десятичный целочисленный литерал
	int waist = 0x42;	// шестнадцатиричный целочисленный литерал
	int inseam = 042;	// восьмиричный целочисленный литерал

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " ( 42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)" << endl;

	cin.get();
	cin.get();

	return 0;
}