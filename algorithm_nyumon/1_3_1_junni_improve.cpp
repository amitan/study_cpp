#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;

int main()
{
	int a[] = {56, 25, 67, 88, 100, 61, 55, 67, 76, 56};
	int asize = sizeof(a) / sizeof(int);
	
	int maxValue = 100;
	int tableSize = maxValue + 2;
	int table[tableSize];	
	for (int i = 0; i < tableSize; i++)
	{
		table[i] = 0;
	}
	
	for (int i = 0; i < asize; i++)
	{
		table[a[i]]++;
	}
	
	for (int i = tableSize - 1; i >= 0; i--)
	{
		if (i == tableSize - 1)
		{
			table[i] = 1;
		}
		else
		{
			table[i] += table[i + 1];
		}
	}
	
	cout << "得点  順位\n";
	
	for (int i = 0; i < asize; i++) {
		cout << right << setw(3) << a[i] << "    " << table[a[i] + 1] << "\n";
	}
}