// znacheniefunc.cpp -- �ணࠬ�� �蠥� �������� �㭪�� �ࠢ�����

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ x
	cout << "������ x: ";
	int x;
	cin >> x;

	// �蠥� �㭪��
	int func;
	func = 3 * pow(x,6) - 6 * pow(x,2) - 7;

	// �뢮��� 
	cout << "�㭪�� 3x^6 - 6x^2 - 7, �� x = " << x << " ࠢ�� " << func << endl;

	cin.get();
	cin.get();

	return 0;
}