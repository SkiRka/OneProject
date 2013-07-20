// limits.cpp -- ��������� ����������� ����� �����

#include <iostream>
#include <climits>		// ����������� ������������ ���� limits.h ��� ������ ������

int main(){
	
	using namespace std;

	int n_int = INT_MAX;		// ������������� n_int ������������ ��������� int
	short n_short = SHRT_MAX;	// �������, ������������ � ����� climits
	long n_long = LONG_MAX;		
	long long n_llong = LLONG_MAX;

	// �������� sizeof ������ ������ ���� ��� ���������� 
	cout << "int is " << sizeof (int) << " bytes." << endl;
	cout << "short is " << sizeof (short) << " bytes." << endl;
	cout << "long is " << sizeof (long) << " bytes." << endl;
	cout << "long long is " << sizeof (long long) << " bytes." << endl << endl;
	cout << endl;

	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl << endl;

	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bites per byte = " << CHAR_BIT << endl;

	cin.get();
	cin.get();

	return 0;
}