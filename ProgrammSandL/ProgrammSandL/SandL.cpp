// sandl.cpp -- �ணࠬ�� ��室�� ����� ���㦭��� � ���頤� ��㣠

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	int pi = 3.14;
	int dlina_O;
	int plosad_S;

	cout << "����� ࠤ��� R: ";
	int radius;
	cin >> radius;

	dlina_O = 2 * pi * radius;
	plosad_S = pi * pow(radius,2);
	
	cout << "����� = " << dlina_O << endl;
	cout << "���頤� = " << plosad_S << endl;

	cin.get();
	cin.get();

	return 0;
}