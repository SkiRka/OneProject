// morechar.cpp --  ���������� ��� char � Int

#include <iostream>

int main(){

	using namespace std;

	char ch = 'M';		// ����������� ch ��� ASCII ������� M
	int i = ch;			// ��������� ���� �� ��� � int

	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "Add one to the character code:" << endl;
	ch = ch + 1;		// �������� ��� ������� � ch
	i = ch;				// ��������� ��� ������ ������� � i
	cout << "The ASCII code for " << ch << " is " << i << endl;

	// ������������� �������-����� cout.put() ��� ����������� �������
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);


	// ������������� cout.put() ��� ����������� ���������� ���������
	cout.put('!');
	cout << endl << "Done" << endl;

	cin.get();
	cin.get();

	return 0;
}