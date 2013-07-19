// areasquare -- программа выводит площадь квадрата

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	int area, storona;
	cout << "Enter storona: ";
	cin >> storona;
	area = pow(storona,2);
	cout << "Area = "
		 << area
		 << "."
		 << endl;

	cin.get();
	cin.get();

	return 0;
}