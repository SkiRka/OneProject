// trade.cpp -- �������� ���⠬� a � b

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ � and b
	cout << "������ � � b: ";
	int a, b;
	cin >> a
		>> b;
	cout << "A = " << a << endl
		 << "B = " << b << endl;

	// ���塞 �� ���⠬� 
	a = b + a;
	b = a - b;
	a = a - b;

	cout << endl; // ࠧ����⥫� ��ப

	// �뢮��� १���� 
	cout << "A = " << a << endl
		 << "B = " << b << endl;

	cin.get();
	cin.get();

	return 0;
}