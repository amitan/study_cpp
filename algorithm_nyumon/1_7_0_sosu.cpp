#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout << "整数を入力してください\n";
	
	int input;
	cin >> input;
	
	int startNum = sqrt(input);
	bool not_sosu = false;
	for (int i = startNum; i >= 2; i--)
	{
		if (input % i == 0) {
			not_sosu = true;
			break;
		}
	}
	
	if (!not_sosu)
	{
		cout << "素数！\n";
	}
	else
	{
		cout << "素数ではない\n";
	}
}