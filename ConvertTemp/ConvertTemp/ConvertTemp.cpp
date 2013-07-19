// converttmp -- переводит температуру из цильсий в фаренгейты

#include <iostream>

int main(){

	using namespace std;
	
	int celsius, farengeit;

	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	farengeit = 1.8 * celsius + 32;
	cout << celsius 
		 << " degrees Celsius is " 
		 << farengeit 
		 << " degrees Fahrenheit." 
		 << endl;
	
	cin.get();
	cin.get();

	return 0;
}