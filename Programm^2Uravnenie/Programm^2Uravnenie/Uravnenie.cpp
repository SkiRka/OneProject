// uravnenie.cpp -- �����⭮� �ࠢ�����

#include <iostream>
#include <cmath>
double descreminant(int,int,int);
double coren1(int,int,int);
double coren2(int,int,int);

int main(){

	using namespace std;

	// ������ 
	cout << "������ A(�� ��㢮� ����樥��), B and C: ";
	int a, b, c;
	cin >> a
		>> b
		>> c;
	
	// ���६�����
	double descrimenant_Func = descreminant(a,b,c);
	cout << "���६����� = " << descrimenant_Func << endl;

	// �뢮���
	double c1 = coren1(b,a,descrimenant_Func);		// ��७� 1
	double c2 = coren2(b,a,descrimenant_Func);		// ��७� 2
	if(c1 < c2){
		cout << "X1 = " << c1 << endl
			 << "X2 = " << c2 << endl;
	} else {
		cout << "X1 = " << c2 << endl
			 << "X2 = " << c1 << endl;
	}

	cin.get();
	cin.get();

	return 0;
}

double descreminant(int a, int b, int c){
	double d = pow(b,2) - 4 * a * c;
	return d;
}

double coren1(int b, int a, int descrimenant_Func){
	double c1 = (-b + sqrt(descrimenant_Func))/(2 * a);
	return c1;
}

double coren2(int b, int a, int descrimenant_Func){
	double c2 = (-b - sqrt(descrimenant_Func))/(2 * a);
	return c2;
}