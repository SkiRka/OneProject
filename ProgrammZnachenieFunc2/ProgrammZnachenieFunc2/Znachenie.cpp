// znachenie.cpp -- ��室�� ���祭�� �������� �㭪樨

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ x
	cout << "������ ���祭�� x: ";
	int x;
	cin >> x;

	// ��室�� 
	int func;
	func = 4 * pow(x-3,6) - 7 * pow(x-3,3) + 2;

	// �뢮���
	cout << "�㭪�� 4(x-3)^6 - 7(x-3)^3 + 2, �� x = " << x << " ࠢ�� " << func << endl;

	cin.get();
	cin.get();

	return 0;
}