// distance.cpp -- ��室�� ����ﭨ� ����� ���� �窠��

#include <iostream>
#include <cmath>

int main(){

	using namespace std;

	// ������ ���न���� �祪
	cout << "������ ���न���� �祪: ";
	int x1, x2, y1, y2;
	cin >> x1
		>> y1
		>> x2
		>> y2;

	// ����塞 ����ﭨ� 
	int distance;
	distance = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

	// �뢮��� १����
	cout << "�����ﭨ� = " << distance << endl;

	cin.get();
	cin.get();

	return 0;
}