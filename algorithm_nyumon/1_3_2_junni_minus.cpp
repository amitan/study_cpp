#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;

int main()
{
	// -20 〜 +36
	int a[] = {-3, 2, 3, -1, -2, -6, 2, -1, 1, 5};
	int asize = sizeof(a) / sizeof(int);
	
	int maxValue = 57;
	int tableSize = maxValue + 1;
	int table[tableSize];
	for (int i = 0; i < tableSize; i++)
	{
		table[i] = 0;
	}
	
	int bias = 21;
	for (int i = 0; i < asize; i++)
	{
		int index = a[i] + bias;
		table[index]++;
	}
	
	for (int i = 0; i < tableSize ; i++)
	{
		if (i == 0)
		{
			table[i] = 1;
		}
		else
		{
			table[i] += table[i - 1];
		}
	}
	
	cout << "得点  順位\n";
	
	for (int i = 0; i < asize; i++) {
		cout << right << setw(3) << a[i] << "    " << table[a[i] + bias - 1] << "\n";
	}
}