#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int MaxNum = 1000;
	int table[MaxNum];
	for (int i = 0; i < MaxNum; i++)
	{
		table[i] = 1; // ふるいに入れる
	}
	
	for (int i = 2; i < MaxNum; i++)
	{
		if (table[i] == 0)
		{
			continue;
		}
		
		for (int j = i + 1; j < MaxNum; j++)
		{
			if (j % i == 0) {
				table[j] = 0;
			}
		}
	}
	
	cout << "素数\n";
	for (int i = 2; i < MaxNum; i++) {
		if (table[i] == 1) {
			cout << i << " ";
		}
	}
	cout << "\n";
	
}