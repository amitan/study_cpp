// 逐次探索
#include<iostream>
using namespace std;

#define MaxValue 9999

int main()
{
	int a[] = {2, 4, 5, 7, 8, 10, 15, 20, 30, 40, MaxValue};
	int b[] = {6, 11, 25, 33, 35, MaxValue};
	
	int asize = sizeof(a) / sizeof(int);
	int bsize = sizeof (b) / sizeof(int);
	int csize = asize + bsize - 2;
	int c[csize];
	
	int aIndex = 0;
	int bIndex = 0;
	int cIndex = 0;
	while (a[aIndex] != MaxValue || b[bIndex] != MaxValue)
	{
		if (a[aIndex] < b[bIndex]) {
			c[cIndex++] = a[aIndex++];
		} else {
			c[cIndex++] = b[bIndex++];
		}
	}
	
	for (int i = 0; i < csize; i++)
	{
		cout << c[i] << " ";
	}
	cout << "\n";
}