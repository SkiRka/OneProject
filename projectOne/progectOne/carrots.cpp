// carrots.cpp -- ��������� �� ���������� ������������ ������� ���������
// ���������� � ���������� ����������

#include <iostream>

int main() {

	using namespace std;
	
	int carrots, pazzle;			// ���������� ����������

	carrots = 25;					// ������������ ���������� ��������
	pazzle = 20;
	cout << "I have ";
	cout << carrots;				// ����������� �������� ����������
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;			// ��������� ����������
	pazzle = pazzle - 2;
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
	cout << "Pazzle = " << pazzle << "." << endl;

	cin.get();
	cin.get();

	return 0;
}