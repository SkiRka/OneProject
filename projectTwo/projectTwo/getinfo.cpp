﻿// getinfo.cpp -- ввод и вывод

#include <iostream>

int main(){

	using namespace std;

	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;		// ввод С++
	cout << "Here are two more. ";
	carrots = carrots + 2;
	// слудующая строка выполняет конкантинацию вывода
	cout << "Now you have " << carrots << " carrots." << endl;

	cin.get();
	cin.get();

	return 0;
}