// confeti.cpp -- �����

#include <iostream>

int main(){

	using namespace std;

	// ������ x ��
	cout << "������ ������⢮ ������ࠬ �����: ";
	int Xkg_confet;
	cin >> Xkg_confet;
	
	// ������ �⮨����� x ��
	cout << "������ �� �⮨�����: ";
	int stoimost_Xkg;
	cin >> stoimost_Xkg;

	// ������ y ��
	cout << "������ Y ��, �⮡� 㧭��� �� �⮨�����: ";
	int Ykg_confet;
	cin >> Ykg_confet;

	// �뢮��� �⮨����� 1 �� � y ��
	int kg_stoim = stoimost_Xkg / Xkg_confet;
	cout << "�⮨����� 1 �� ����� = " << kg_stoim << endl
		 << "�⮨����� " << Ykg_confet << " = " << kg_stoim * Ykg_confet << endl;

	cin.get();
	cin.get();

	return 0;
}