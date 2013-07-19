// convertold -- преобразует возраст в мес€ца

#include <iostream>

int main(){

	using namespace std;

	int old, monthOld;
	cout << "Enter you age: ";
	cin >> old;
	monthOld = old * 12;
	cout << "Your age in months is " << monthOld << "." << endl;

	cin.get();
	cin.get();

	return 0;
}