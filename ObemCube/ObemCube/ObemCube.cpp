// obemcube -- программа выводит объем куба

#include <iostream>
#include <cmath>

int main(){
	
	using namespace std;
	int dlina_rebra, obem, ploshad;

	cout << "Enter dlinaRebra: ";
	cin >> dlina_rebra;
	obem = pow(dlina_rebra, 3);
	ploshad = 6 * pow(dlina_rebra,2);
	cout << "Enter obem = " 
		 << obem 
		 << " and ploshad = " 
		 << ploshad 
		 << endl;

	cin.get();
	cin.get();

	return 0;
}