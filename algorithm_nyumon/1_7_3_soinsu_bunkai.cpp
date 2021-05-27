#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout << "整数を入力してください\n";
	
	int input;
	cin >> input;
	int index = 0;
	
	for (int i = 2; i <= sqrt(input); i++)
	{
		while (input % i == 0)
		{
			input = input / i;
			if (index > 0) {
				cout << "*";
			}
			cout << i;
			index++;
		}
	}
	if (input > 1) {
		if (index > 0) {
			cout << "*";
		}
		cout << input;
	}
	cout << "\n";
}