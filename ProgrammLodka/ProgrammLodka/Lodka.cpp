// lodka.cpp -- �����

#include <iostream>

int main(){

	using namespace std;

	// ������ �� �����
	cout << "������ ᪮���� ����� � ���祩 ����: ";
	int stoy_V;
	cin >> stoy_V;
	cout << "������ ᪮���� �祭�� ४�: ";
	int techen_R;
	cin >> techen_R;
	if (stoy_V > techen_R){
		cout << "������ �६� �������� ����� �� �����: ";
		int ozero_T;
		cin >> ozero_T;
		cout << "������ �६� �������� �� ४�: ";
		int reka_T;
		cin >> reka_T;
		// ��室�� ����
		int distance;
		distance = ozero_T * stoy_V;
		if (reka_T != 0){
			stoy_V = stoy_V - techen_R;
			distance = distance + (reka_T * stoy_V);
		}
		// �뢮��� १����
		cout << "���� = " << distance << endl;

	} else cout << "�����室��" << endl;

	cin.get();
	cin.get();

	return 0;
}