// trade.cpp -- ��ॢ���� ࠤ���� � �ࠤ���

#include <iostream>

int main(){

	using namespace std;

	// ������ 㣫� � ࠤ�����
	cout << "������ ���祭�� 㣫� � ࠤ�����: ";
	int radiani;
	cin >> radiani;

	// pi
	double pi = 3.14;

	// ��室�� 
	if (radiani <= (2 * pi) && radiani >= 0){
		int gradusi;
		gradusi = radiani * 180 / pi;
		cout << "�ࠤ�� = " << gradusi << endl;
	} else cout << "�����室��" << endl;

	cin.get();
	cin.get();

	return 0;
}