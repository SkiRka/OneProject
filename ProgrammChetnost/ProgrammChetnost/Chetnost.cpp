// chetnost.cpp -- �ணࠬ�� ���� True, �᫨ �᫮ �⭮�

#include <iostream>

int main(){

	using namespace std;

	// ������ �᫮
	cout << "������ �᫮: ";
	int chislo;
	cin >> chislo;

	// �஢��塞 �� ��⭮���
	int chetnoe;
	chetnoe = chislo % 2;
	if (chetnoe == 0){
		cout << "True" << endl;
	} else{
		cout << "False" << endl;
	}

	cin.get();
	cin.get();

	return 0;
}