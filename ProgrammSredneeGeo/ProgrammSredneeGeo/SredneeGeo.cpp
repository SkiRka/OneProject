// sredneegeo.cpp -- ������ �।��� ��������᪮� ���� �ᥫ

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	cout << "������ ��� ������⥫��� �᫠: " << endl;
	unsigned int pervoe, vtoroe;
	cin >> pervoe
		>> vtoroe;
	unsigned int srednee_Geo = sqrt(pervoe * vtoroe);

	cout << "�।��� ��������᪮� = " << srednee_Geo << endl;

	cin.get();
	cin.get();

	return 0;
}