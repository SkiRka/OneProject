// trmperatura.cpp -- ��ॢ��� 樫�ᨨ � �७�����

#include <iostream>

int main(){

	using namespace std;

	// �� ��७����� � ����ᨨ
	// ������ ⥬������� � ��७�����
	cout << "������ ⥬������� � �७�����: ";
	double far;
	cin >> far;

	// ��ॢ���� ��७���� -> ����ᨨ
	double celsii;
	double n;
	n = (double)5 / (double)9;
	celsii = (far - 32) * n;
	
	// �뢮���
	cout << "��������� �� ��७����� = " << far 
		 << " ࠢ�� �� ������ = " << celsii << endl;

	cout << endl;	// ࠧ����⥫�
	// �� ������ � ��७�����
	cout << "������ ⥬������� � 楫����: ";
	cin >> celsii;
	
	// ��ॢ���� ����ᨨ -> ��७�����
	far = (celsii / n) + 32;

	// �뢮���
	cout << "��������� �� ������ = " << celsii
		 << " ࠢ�� �� ��७����� = " << far << endl;

	cin.get();
	cin.get();

	return 0;
}