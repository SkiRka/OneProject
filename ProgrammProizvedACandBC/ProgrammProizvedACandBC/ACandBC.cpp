// acandbc.cpp -- �ணࠬ�� ��室�� �ந�������� AC � BC

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ �� �窨
	int A, B, C;
	cout << "���� �� �窨: ";
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;
	cout << "C = ";
	cin >> C;
	

	// ��室�� �ந��������
	int AC, BC, proizvod_ACBC;
	if (A < C && B > C){
		AC = C - A;
		BC = B - C;
	} else cout << "�����室��" << endl;
	proizvod_ACBC = AC * BC;
	cout << "�ந�������� = " << proizvod_ACBC << endl;

	cin.get();
	cin.get();

	return 0;
}