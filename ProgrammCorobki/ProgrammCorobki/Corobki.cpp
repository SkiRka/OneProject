// coribki.cpp -- �����

#include <iostream>

int main(){

	using namespace std;

	// ������ ࠧ���� �騪� � ��஡�� � ⮢�஬
	cout << "������� �騪�: ";
	int L, M, N;
	cin >> L
		>> M
		>> N;
	cout << "������� ��஡��: ";
	int P, Q, R;
	cin >> P
		>> Q
		>> R;

	// ��室�� १����
	int rezultat;
	L /= R;
	M /= Q;
	N /= P;
	rezultat = L * M * N;

	// �뢮��� 
	cout << "������� = " << rezultat << endl;

	cin.get();
	cin.get();

	return 0;
}