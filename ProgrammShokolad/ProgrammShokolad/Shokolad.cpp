// shokolad.cpp -- �����

#include <iostream>

int main(){

	using namespace std;

	// ����� 讪�����
	cout << "������ ������⢮ �� 讪�����: ";
	int kg_shokolad;
	cin >> kg_shokolad;
	cout << "������ �⮨����� ��� ��: ";
	int stoimost_kgShokolad;
	cin >> stoimost_kgShokolad;

	// ����� ��᪨
	cout << "������ ������⢮ �� ��᮪: ";
	int kg_irisok;
	cin >> kg_irisok;
	cout << "������� �⮨����� ��� ��: ";
	int stoimost_kgIrisok;
	cin >> stoimost_kgIrisok;

	// ��室�� ᪮�쪮 �⮨� �� � �� ࠧ����
	int kg1_sh, kg1_iris;
	kg1_sh = stoimost_kgShokolad / kg_shokolad;
	kg1_iris = stoimost_kgIrisok / kg_irisok;
	
	// ������
	double raznica;
	if (kg1_sh > kg1_iris){
		raznica = kg1_sh / kg1_iris;		
	} else {
		raznica = kg1_iris / kg1_sh;
	}

	// �뢮���
	cout << "�⮨����� 1 �� 讪����� = " << kg1_sh << endl
		 << "�⮨����� 1 ��� ��᮪ = " << kg1_iris << endl
		 << "������ � 業� = " << raznica << endl;

	cin.get();
	cin.get();
	
	return 0;
}