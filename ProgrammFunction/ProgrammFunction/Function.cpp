// function.cpp -- программа использует три определяемые пользователем функции

#include <iostream>
using namespace std;

void oneFunc();
void twoFunc();

int main(){

	oneFunc();
	oneFunc();
	twoFunc();
	twoFunc();

	cin.get();
	cin.get();

	return 0;
}

void oneFunc(){
	cout << "Three blind mice" << endl;
}

void twoFunc(){
	cout << "See how they run" << endl;
}