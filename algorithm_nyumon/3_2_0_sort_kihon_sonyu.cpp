// 基本挿入法
#include<iostream>
using namespace std;

#define N 10
void change(int *x, int *y);

int main()
{
	int a[N];
	cout << "##### Before Sort\n";
	for (int i = 0; i < N; i++)
	{
		a[i] = rand();
		cout << a[i] << "\n";
	}
	cout << "\n##### After Sort\n";
	
	for (int i = 1; i < N; i++)
	{
		for (int j = i - 1; j >= 0; j--) {
			if (a[j] <= a[j+1]) {
				break;
			}
			change(&a[j], &a[j+1]);
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		cout << a[i] << "\n";
	}
	cout << "\n";
}

void change(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
