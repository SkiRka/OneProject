// mony.cpp -- ������ �⮨����� ���㯪� 

#include <iostream>

int main(){
	
	using namespace std;

	// ��ᨬ ���짮��⥫� ����� �㦭� �����
	cout << "������ ������⢮ �祡�����: ";
	int count;
	cin >> count;
	cout << "������ �⮨����� �祡����� � �㡮���: ";
	int mony_ru;
	cin >> mony_ru;
	cout << "������ �⮨����� �祡����� � ��������: ";
	int mony_coppek;
	cin >> mony_coppek;

	// ��室�� �㦭��� �㬬�
	int obshee = 0;
	mony_ru *= count;
	mony_coppek *= count;
	obshee += mony_coppek / 100;
	obshee += mony_ru;
	mony_coppek %= 100;

	// �뢮��� १����
	cout << "�㬬� = " << obshee << " ��. " << mony_coppek << " ���." << endl;

	cin.get();
	cin.get();

	return 0;
}