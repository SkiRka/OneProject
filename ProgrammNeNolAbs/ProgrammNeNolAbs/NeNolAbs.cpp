// nenolabs.cpp -- ��室�� �㬬�, ࠧ�����, �ந�������� � ��⭮� �����⮢ �ᥫ

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ ��� ���㫥��� �᫠
	cout << "������ ��� �᫠: ";
	int pervoe, vtoroe;
	cin >> pervoe
		>> vtoroe;
	int obshee;
	obshee = pow(pervoe,2) + pow(vtoroe,2);
	cout << "�㬬� = " << obshee << endl;
	obshee = pow(pervoe,2) - pow(vtoroe,2);
	cout << "�������� = " << obshee << endl;
	obshee = pow(pervoe,2) * pow(vtoroe,2);
	cout << "�ந�������� = " << obshee << endl;
	obshee = pow(pervoe,2) / pow(vtoroe,2);
	cout << "���⭮� = " << obshee << endl;

	cin.get();
	cin.get();

	return 0;
}