// geron.cpp -- ��室�� ���頤� � ��ਬ���

#include <iostream>
#include <cmath>

int main(){

	using namespace std;
	
	// ������ ���न����
	cout << "������ ���न���� ��� ���設: ";
	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1
		>> x2 >> y2 
		>> x3 >> y3;
	
	// ��室�� a, b, c
	int a, b, c;
	a = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
	b = sqrt(pow(x3 - x2,2) + pow(y3 - y1,2));
	c = sqrt(pow(x1 - x3,2) + pow(y1 - y3,2));
	int perimetr_T;	// ���㯨ਬ���
	perimetr_T = (a + b + c) / 2;
	int plosad_T;	// ���頤� ��㣮�쭨��
	plosad_T = sqrt(perimetr_T*((perimetr_T - a) * (perimetr_T - b) * (perimetr_T - c)));

	// �뢮��� १����
	cout << "��ਬ��� = " << a + b + c << endl
		 << "���頤� = " << plosad_T << endl;

	cin.get();
	cin.get();

	return 0;
}