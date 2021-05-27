#include<iostream>
using namespace std;

int main()
{
	int A = 109;
	int B = 1021;
	int M = 32768;
	int Seed = 13;
	int CreationNum = 100; // 生成回数
	
	int value = Seed;
	for (int i = 0; i < CreationNum; i++)
	{
		value = (A * value + B) % M;
		cout << value << " ";
	}
	cout << "\n";
}