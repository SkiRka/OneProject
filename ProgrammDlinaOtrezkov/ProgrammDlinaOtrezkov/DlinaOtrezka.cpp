// dlinaotrezka.cpp -- �뢮��� ����� �������� ��१��� � �� �㬬�

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ �� �窨
	cout << "������ �� �窨 A, B, C: ";
	int A, B, C;
	cin >> A
		>> B
		>> C;

	// ��室�� ����� ��१��� � �� �㬬�
	int AC, BC;
	if (A < C){
		AC = C - A;
	} else {
		AC = A - C;
	}
	if (B < C){
		BC = C - B;
	} else {
		BC = B - C;
	}
	int sum_ACBC;
	sum_ACBC = AC + BC;

	// �뢮��� १����
	cout << "����� AC = " << AC << endl
		 << "����� BC = " << BC << endl
		 << "�㬬� = " << sum_ACBC
		 << endl;

	cin.get();
	cin.get();

	return 0;
}