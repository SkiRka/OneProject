// morechar.cpp --  сравнивает тип char и Int

#include <iostream>

int main(){

	using namespace std;

	char ch = 'M';		// присваивает ch код ASCII символа M
	int i = ch;			// сохраняет этот же код в int

	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "Add one to the character code:" << endl;
	ch = ch + 1;		// изменяем код символа в ch
	i = ch;				// сохраняем код нового символа в i
	cout << "The ASCII code for " << ch << " is " << i << endl;

	// использование функции-члена cout.put() для отображения символа
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);


	// использование cout.put() для отображения символьной константы
	cout.put('!');
	cout << endl << "Done" << endl;

	cin.get();
	cin.get();

	return 0;
}