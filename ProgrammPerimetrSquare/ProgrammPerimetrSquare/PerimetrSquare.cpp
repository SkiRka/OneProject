// perimetrsquare -- программа выводит периметр квадрата

#include <iostream>

int main(){

	using namespace std;

	int perimetr, storona;
	cout << "Enter storona: ";
	cin >> storona;
	perimetr = 4 * storona;
	cout << "Perimetr = " << perimetr << endl;

	cin.get();
	cin.get();

	return 0;
}