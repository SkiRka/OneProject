// uravnenie.cpp -- �������� �ࠢ�����

#include <iostream>

int main(){

	using namespace std;

	// ������ � � b
	cout << "������ a(�� �㫥��� ����樥��) and b: ";
	int a, b;
	cin >> a
		>> b;

	// �뢮���
	int x;
	x = -b / a;
	cout << "�ࠢ����� A*x + B = 0, ��� x =  " << x << endl; 

	cin.get();
	cin.get();

	return 0;
}