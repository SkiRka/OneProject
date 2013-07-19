// time -- программа выводит часы и минуты, которые вы ввели, через фенкцию

#include <iostream>
using namespace std;
void time(int,int);

int main(){

	int hours, minuts;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minuts: ";
	cin >> minuts;
	time(hours, minuts);

	cin.get();
	cin.get();

	return 0;
}

void time(int hours, int minuts){
	cout << "Time: " << hours << ":" << minuts << endl;
}