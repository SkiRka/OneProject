// vershini.cpp -- ��஭� ��אַ㣮�쭨��

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ ��न���� ���設
	cout << "������ ���न���� ���設: ";
	int x1, x2, y1, y2;
	cin >> x1
		>> y1
		>> x2 
		>> y2;
	
	// ��室�� ��ਬ��� � ���頤�
	int perimetr, plosad;
	int a, b;
	a = abs(x2 - x1);
	b = abs(y2 - y1);
	perimetr = 2 * (a + b);
	plosad = a * b;

	// �뢮��� 
	cout << "��ਬ��� = " << perimetr << endl;
	cout << "���頤� = " << plosad << endl;

	cin.get();
	cin.get();

	return 0;
}