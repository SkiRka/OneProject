// nenol.cpp -- ��室�� �㬬�, ࠧ����� � �ந�������� �� �㫥��� �ᥫ

#include <iostream>

int main(){

	using namespace std;

	// ������ ��� �� ����� �᫠
	cout << "������ ��� �� �㫥��� �᫠: ";
	int pervoe, vtoroe;
	cin >> pervoe
		>> vtoroe;
	int obshee;
	obshee = pervoe + vtoroe;
	cout << "�㬬� = " << obshee << endl;
	obshee = pervoe - vtoroe;
	cout << "�������� = " << obshee << endl;
	obshee = pervoe * vtoroe;
	cout << "�ந�������� = " << obshee << endl;
	obshee = pervoe / vtoroe;
	cout << "���⭮� = " << obshee << endl;

	cin.get();
	cin.get();

	return 0;
}