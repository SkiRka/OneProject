// convertfar.cpp -- переводит фарлонги в ядра

#include <iostream>

int main(){

	using namespace std;

	int farlongs, yadrs;
	cout << "Enter distance farlong's: ";
	cin >> farlongs;
	yadrs = farlongs * 220;
	cout << "Distance yadr's = " << yadrs << endl;

	cin.get();
	cin.get();

	return 0;
}