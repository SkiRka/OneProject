// x1andx2.cpp -- �뢮��� ����ﭨ� ����� ���� �窠��

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ ���न���� �祪
	cout << "������ ���न���� ��ࢮ� �窨: ";
	int pervay_T;
	cin >> pervay_T;
	cout << "������ ���न���� ��ன �窨: ";
	int vtoroe_T;
	cin >> vtoroe_T;

	// ��室�� ����ﭨ�
	int distance_T;
	distance_T = abs(vtoroe_T - pervay_T);

	// �뢮��� १���� 
	cout << "�����ﭨ� = " << distance_T << endl;

	cin.get();
	cin.get();

	return 0;
}