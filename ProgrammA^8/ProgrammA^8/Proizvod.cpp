// proizvod.cpp -- ��室�� �ந�������� 

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ �᫮ A
	cout << "������ A: ";
	int a;
	cin >> a;

	// ��室��
	int proizvod;
	proizvod = pow(a,2);
	proizvod = pow(proizvod,2);
	proizvod = pow(proizvod,2);

	// �뢮��� 
	cout << "�ந�������� A^8 = " << proizvod << endl;


	cin.get();
	cin.get();

	return 0;
}