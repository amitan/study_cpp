#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int MaxNum = 1000;
	int table[MaxNum];
	int tableIndex;
	
	for (int i = 0; i < MaxNum; i++)
	{
		table[i] = 0;
	}
	
	for (int i = 2; i < MaxNum; i++)
	{
		bool not_sosu = false;
		for (int j = sqrt(i); j >= 2; j--) {
			if (i % j == 0) {
				not_sosu = true;
				break;
			}
		}
		
		if (!not_sosu)
		{
			table[tableIndex++] = i;
		}
	}
	
	cout << "素数\n";
	for (int i = 0; i < MaxNum; i++)
	{
		if (table[i] >= 2) {
			cout << table[i] << " ";
		}
	}
	cout << "\n";
}