// catetpramo.cpp -- ��室�� ����⨭�� � ��ਬ��� ��אַ㣮�쭮�� ��㣮�쭨��

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ ��� �᫠ 
	cout << "������ ����� ��㣮�쭨��: ";
	int katet1, katet2;
	cin >> katet1
		>> katet2;
	int gipotinuza_C, perimetr_P;
	gipotinuza_C = sqrt(pow(katet1,2) + pow(katet2,2));
	perimetr_P = katet1 + katet2 + gipotinuza_C;
	// �뢮��� १����
	cout << "����⨭㧠 = " << gipotinuza_C 
		 << " ��ਬ��� = " << perimetr_P 
		 << endl;
	cin.get();
	cin.get();

	return 0;
}