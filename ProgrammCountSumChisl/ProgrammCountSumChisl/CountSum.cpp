// countsum.cpp -- �뢮�� ������⢮ ��� � �㬬� �ᥫ

#include <iostream>

int main(){

	using namespace std;

	// ������ ��� �᫠ 
	cout << "������ ��� �᫠: ";
	int chislo1, chislo2;
	cin >> chislo1
		>> chislo2;

	// ��室�� ������⢮
	int sum_Count;
	int schetchik = 0;
	sum_Count = chislo1 + chislo2;
	while (sum_Count != 0)
	{
		sum_Count /= 10;
		schetchik++;
	}

	// �뢮���
	cout << "������⢮ ��� � �㬬� = " << schetchik << endl;

	cin.get();
	cin.get();

	return 0;
}