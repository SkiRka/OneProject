// dandl.cpp -- �ணࠬ�� �뢮��� ������� � ����� ���㦭���

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ ���頤� ���㦭���
	cout << "������ ���頤� ���㦭���: ";
	int plosad_O;
	cin >> plosad_O;

	// ��室�� ������� � �����
	double pi = 3.14, diametr_O, dlina_O;
	diametr_O = 2 * sqrt(plosad_O / pi);
	dlina_O = pi * diametr_O;

	// �뢮��� �⢥� 
	cout << "������� = " << diametr_O << endl;
	cout << "����� = " << dlina_O << endl;

	cin.get();
	cin.get();

	return 0;
}