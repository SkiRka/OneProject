// palatki.cpp -- �����

#include <iostream>

int main(){

	using namespace std;

	// ������ ࠧ���� ����⪨ � ���頤��
	cout << "������ ࠧ���� ���頤�� NxM: ";
	int N, M;
	cin >> N
		>> M;
	cout << "������ ࠧ���� ����⪨: ";
	int K;
	cin >> K;

	// ��室�� ᪮�쪮 ����⮪ ����� 
	// ���������� �� ������ ���頤��
	int count_razmer;
	N /= K;
	M /= K;
	count_razmer = M * N;

	// �뢮��� १����
	cout << "������� = " << count_razmer << endl;

	cin.get();
	cin.get();

	return 0;
}