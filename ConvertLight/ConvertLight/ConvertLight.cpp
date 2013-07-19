// convertlight -- программа переводит световые дни в астрономические

#include <iostream>
int astronom(double);

int main(){

	using namespace std;
	double light;

	cout << "Enter the number of light years: ";
	cin >> light;
	int astronomik = astronom(light);
	cout << light 
		 << " light years = "
		 << astronomik
		 << " astronomical units."
		 << endl;

	cin.get();
	cin.get();

	return 0;
}

int astronom(double ligh){
	return ligh * 63240;
}