// colco.cpp -- �뢮��� ���頤� ��㣮�

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	double pi = 3.14;

	// ������ �����
	cout << "������ ࠤ����: ";
	int pervi_r, vtoroi_r;
	cin >> pervi_r
		>> vtoroi_r;
	if (pervi_r >= vtoroi_r){
		double plosad_s1,plosad_s2,plosad_s3;
		plosad_s1 = pi * pow(pervi_r,2);
		plosad_s2 = pi * pow(vtoroi_r,2);
		plosad_s3 = plosad_s1 - plosad_s2;
		// �뢮��� �����
		cout << "���頤� ��ࢮ�� = " << plosad_s1 << endl;
		cout << "���頤� ��ண� = " << plosad_s2 << endl;
		cout << "���頤� ����� = " << plosad_s3 << endl;
	} else {
		cout << "������ ��ࢮ��, ����� ࠤ��� ��ண�" << endl;
	}

	cin.get();
	cin.get();

	return 0;
}