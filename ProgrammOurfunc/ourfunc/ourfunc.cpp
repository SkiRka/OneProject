// ourfunc.cpp -- определение собственной функции

#include <iostream>
using namespace std;	// влияет на все определения функций в этом файле
void simon(int);		// прототип функции

int main(){

	simon(3);			// вызов функции simon()
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);		// ещё один вызов функции simon()
	cout << "Done!" << endl;

	cin.get();
	cin.get();

	return 0;
}

void simon(int n){		// определение функции simon()

	cout << "Simon says touch your toes " << n << " times." << endl;
} // функции void не требует операторов return
