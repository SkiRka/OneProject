// piradean.cpp -- ��।���� ���祭�� � ࠤ�����

#include <iostream>

int main(){

	using namespace std;

	// ������ ���祭�� 㣫� � �ࠤ���
	cout << "������ ���祭�� 㣫� � �ࠤ���: ";
	int gradusi;
	cin >> gradusi;

	// pi
	double pi = 3.14;

	// ��室�� 
	if (gradusi <= 360 && gradusi >= 0){
		double znacheni_G;
		znacheni_G = gradusi * (pi / 180);
		cout << "���祭�� � ࠤ����� = " << znacheni_G << endl;
	} else cout << "�����室��" << endl;

	cin.get();
	cin.get();


	return 0;
}