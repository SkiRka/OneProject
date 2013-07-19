// parallel -- выводит объем параллелепипеда и площадь поверхности

#include <iostream>

int main(){

	using namespace std;

	int storona1, storona2, storona3, obem, ploshad;

	cout << "Enter storon's: ";
	cin >> storona1
		>> storona2
		>> storona3;
	obem = storona1 * storona2 * storona3;
	ploshad = 2 * (storona1 * storona2 + storona2 * storona3 + storona1 * storona3);
	cout << "Obem = " 
		 << obem 
		 << " and Ploshad = " 
		 << ploshad 
		 << "." 
		 << endl;

	cin.get();
	cin.get();

	return 0;
}