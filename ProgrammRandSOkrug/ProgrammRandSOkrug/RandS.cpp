// rands.cpp -- �ணࠬ�� ��室�� ࠤ��� ���㦭��� � ���頤� ��㣠 ���ᠭ���� � ���㦭����

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	double pi = 3.14;

	// ������ �����
	cout << "������ ����� ���㦭���: ";
	int dlina_O;
	cin >> dlina_O;

	// ��室�� ࠤ��� � ���頤�
	double radius_O, plosad_K;
	radius_O = dlina_O / (2 * pi);
	plosad_K = pi * pow(radius_O,2);

	// �뢮��� �⢥�
	cout << "������ = " << radius_O << endl;
	cout << "���頤� = " << plosad_K << endl;

	cin.get();
	cin.get();

	return 0;
}