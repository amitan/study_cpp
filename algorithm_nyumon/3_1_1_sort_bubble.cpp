// バブルソート
#include<iostream>
using namespace std;

int main()
{
	int a[] = {80, 41, 35, 90, 40, 20};
	int asize = sizeof(a) / sizeof(int);
	for (int i = 0; i < asize - 1; i++)
	{
		for (int j = 0; j < asize - 1 - i; j++) {
			if (a[j] > a[j+1]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for (int i = 0; i < asize; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
}
