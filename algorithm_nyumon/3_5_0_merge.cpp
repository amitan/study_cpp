// 逐次探索
#include<iostream>
using namespace std;

#define N 10

int main()
{
	int a[] = {2, 4, 5, 7, 8, 10, 15, 20, 30, 40};
	int b[] = {6, 11, 25, 33, 35};
	
	int asize = sizeof(a) / sizeof(int);
	int bsize = sizeof (b) / sizeof(int);
	int c[asize + bsize];
	
	int aIndex = 0;
	int bIndex = 0;
	int cIndex = 0;
	while (aIndex < asize || bIndex < bsize)
	{
		if (a[aIndex] < b[bIndex] || bIndex >= bsize) {
			c[cIndex++] = a[aIndex++];
		} else {
			c[cIndex++] = b[bIndex++];
		}
	}
	
	for (int i = 0; i < asize + bsize; i++)
	{
		cout << c[i] << " ";
	}
	cout << "\n";
}