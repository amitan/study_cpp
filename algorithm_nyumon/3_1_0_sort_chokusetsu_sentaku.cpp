// 直接選択法によるソート
#include<iostream>
using namespace std;

int main()
{
	int a[] = {80, 41, 35, 90, 40, 20};
	int asize = sizeof(a) / sizeof(int);
	for (int i = 0; i < asize - 1; i++)
	{
		int min = a[i];
		int minJ = i;
		for (int j = i; j < asize; j++) {
			if (min > a[j]) {
				min = a[j];
				minJ = j;
			}
		}
		
		a[minJ] = a[i];
		a[i] = min;
	}
	
	for (int i = 0; i < asize; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
}
