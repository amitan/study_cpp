#include<iostream>
#include<cmath>
using namespace std;

int randomValue;
int rnd();

int A = 109;
int B = 1021;
int M = 32768;

int main()
{
	int Seed = 13;
	int CreationNum = 1000; // 生成回数
	int Rank = 10;
	
	int table[Rank + 1];
	int tableSize = sizeof(table) / sizeof(int);
		for (int i = 0; i < tableSize; i++)
	{
		table[i] = 0;
	}
	
	randomValue = Seed;
	for (int i = 0; i < CreationNum; i++)
	{
		int rank = (float)rnd() / M * Rank + 1; // 1〜RANKの間の乱数
		table[rank]++;
	}
	
	float result = 0;
	int expected = CreationNum / Rank;
	for (int i = 1; i < tableSize; i++)
	{
		result += pow(table[i] - expected, 2) / (float)table[i];
		
		cout << i << " = " << table[i] << "\n";
	}
	cout << "\n";
	cout << "χ2 = " << result << "\n";
}

int rnd()
{
	randomValue = (A * randomValue + B) % M;
	return randomValue;
}