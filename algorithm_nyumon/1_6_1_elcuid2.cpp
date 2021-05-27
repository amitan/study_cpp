#include<iostream>
using namespace std;

int main()
{
	cout << "2つの整数を入力してください\n";
	int input1, input2;
	cin >> input1 >> input2;
	
	int amari = 0;
	do {
		amari = input1 % input2;
		input1 = input2;
		input2 = amari;
	} while (amari != 0);
	
	cout << "最大公約数 = " << input1;
}