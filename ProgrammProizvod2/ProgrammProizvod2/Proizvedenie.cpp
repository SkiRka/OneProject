// proizvedenie.cpp -- ��室�� �ந��������

#include <iostream>
#include <cmath>

int main(){

	using namespace std;
	
	// ������ �
	cout << "������ A: ";
	int a;
	cin >> a;

	// ��室�� � �뢮���
	int proizvod1, proizvod2;
	proizvod1 = a * a;
	cout << "A^2 = " << proizvod1 << endl;
	proizvod1 *= a;
	cout << "A^3 = " << proizvod1 << endl;
	proizvod1 = proizvod1 * a * a;
	cout << "A^5 = " << proizvod1 << endl;
	proizvod2 = proizvod1 * proizvod1;
	cout << "A^10 = " << proizvod2 << endl;
	proizvod2 = proizvod2 * proizvod1;
	cout << "A^15 = " << proizvod2 << endl;


	cin.get();
	cin.get();

	return 0;
}