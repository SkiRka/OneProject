// automobil.cpp -- �����

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ ����� �� ��⮬�����
	cout << "������ ᪮���� ��ࢮ�� ��⮬�����: ";
	int skor_V1;
	cin >> skor_V1;
	cout << "������ ᪮���� ��ண� ��⮬�����: ";
	int skor_V2;
	cin >> skor_V2;
	cout << "������ ����ﭨ� ����� ����: ";
	int distance_S;
	cin >> distance_S;
	cout << "������ �६� � ���: ";
	int time_S;
	cin >> time_S;

	// ��室�� ����ﭨ�
	int obshe_S;
	int summar_V = skor_V1 + skor_V2;
	obshe_S = time_S * summar_V;
	int distance = abs(distance_S - obshe_S);

	// �뢮���
	cout << "�����ﭨ� = " << distance << endl;

	cin.get();
	cin.get();

	return 0;
}