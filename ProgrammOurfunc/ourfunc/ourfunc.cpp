// ourfunc.cpp -- ����������� ����������� �������

#include <iostream>
using namespace std;	// ������ �� ��� ����������� ������� � ���� �����
void simon(int);		// �������� �������

int main(){

	simon(3);			// ����� ������� simon()
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);		// ��� ���� ����� ������� simon()
	cout << "Done!" << endl;

	cin.get();
	cin.get();

	return 0;
}

void simon(int n){		// ����������� ������� simon()

	cout << "Simon says touch your toes " << n << " times." << endl;
} // ������� void �� ������� ���������� return
