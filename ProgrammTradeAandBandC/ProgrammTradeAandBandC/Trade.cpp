// trade.cpp -- ����� ���⠬� a and b and c

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ a and b and c
	cout << "������ A, B, C: ";
	int A, B, C;
	cin >> A
		>> B
		>> C;
	cout << "A = " << A << endl
		 << "B = " << B << endl
		 << "C = " << C << endl;

	cout << endl;	// ࠧ����⥫�

	// ����⠢�塞 ���⠬�
	int D;
	D = C;
	C = B;
	B = A;
	A = D;

	// �뢮��� 
	cout << "A = " << A << endl 
		 << "B = " << B << endl 
		 << "C = " << C << endl ;

	cin.get();
	cin.get();


	return 0;
}