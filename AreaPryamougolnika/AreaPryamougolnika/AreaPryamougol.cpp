// areapryamougol -- выводит площалдь прямоугольника и его периметр

#include <iostream>

int main(){
	
	using namespace std;

	int storona1, storona2, area, perimetr;
	cout << "Enter storona1: ";
	cin >> storona1;
	cout << "Enter storona2: ";
	cin >> storona2;
	area = storona1 * storona2;
	perimetr = 2 * (storona1 + storona2);
	cout << "Area = " 
		 << area 
		 << " and Perimetr = " 
		 << perimetr 
		 << endl;

	cin.get();
	cin.get();

	return 0;
}