// palatka2.cpp -- �����

#include <iostream>

int main(){
	
	using namespace std;

	// ������ ࠧ���� ���頤�� � ����⪨
	cout << "������ ࠧ���� ���頤��: ";
	int N, M;
	cin >> N
		>> M;
	cout << "������ ࠧ���� ����⪨: ";
	int K, L;
	cin >> K
		>> L;

	// ��室�� १����
	int rezultat;
	N /= L;
	M /= K;
	rezultat = N * M;
	
	// �뢮��� १����
	cout << "������� = " << rezultat << endl;


	cin.get();
	cin.get();

	return 0;
}
