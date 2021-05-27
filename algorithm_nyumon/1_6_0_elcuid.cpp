#include<iostream>
using namespace std;

int main()
{
	cout << "2つの整数を入力してください\n";
	int input1, input2;
	cin >> input1 >> input2;
		
	do {
		if (input1 > input2)
		{
			input1 = input1 - input2;
		}
		if (input1 < input2)
		{
			input2 = input2 - input1;
		}
		
	} while (input1 != input2);
	
    cout << "最大公約数 = " << input1 << "\n";
}