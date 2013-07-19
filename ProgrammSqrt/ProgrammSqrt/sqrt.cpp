// sqrt.cpp -- использование функции sqrt()

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	double area;
	cout << "Enter the floor area, in square feet, of your hoeme: ";
	cin >> area;
	double side = sqrt(area);
	cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
	cout << "How fascinating!" << endl;

	cin.get();
	cin.get();

	return 0;
}