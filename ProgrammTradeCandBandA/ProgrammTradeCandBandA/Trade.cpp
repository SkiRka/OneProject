// trade.cpp -- �������� ��⠬� ᮤ�ন���

#include <iostream>

int main(){

	using namespace std;

	// ������ �����
	cout << "������ A and B and C: ";
	int a, b, c;
	cin >> a
		>> b
		>> c;
	cout << "A = " << a << endl
		 << "B = " << b << endl
		 << "C = " << c << endl;

	cout << endl;	// ࠧ����⥫�

	// ���塞 ���⠬�
	int d;
	d = c;
	c = a;
	a = b;
	b = d;

	// �뢮��� 
	cout << "A = " << a << endl
		 << "B = " << b << endl
		 << "C = " << c << endl;

	cin.get();
	cin.get();

	return 0;	
}