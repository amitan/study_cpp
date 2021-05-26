#include<iostream>
#include<random>
using namespace std;

int main()
{
	int num = 20;
	int table[num];
	
	for (int i = 0; i < num; i++)
	{
		table[i] = i + 1;
	}
	
	for (int i = num - 1; i >= 2; i--)
	{
		int targetIndex = rand() % (i - 1) + 1;
		int baseValue = table[i];
		table[i] = table[targetIndex];
		table[targetIndex] = baseValue;
	}
	
	for (int i = 0; i < num; i++)
	{
		cout << "value = " << table[i] << "\n";
	}
}