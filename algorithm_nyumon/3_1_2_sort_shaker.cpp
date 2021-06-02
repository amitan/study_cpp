// シェイカーソート
#include<iostream>
using namespace std;

void change(int *x, int *y);

int main()
{
	int a[] = {3, 5, 6, 9, 2, 7, 8, 10, 4};
	int asize = sizeof(a) / sizeof(int);
	
	int left = 0;
	int right = asize - 1;
	int shift;
	
	while (left < right) {
		
		for (int i = left; i < right; i++) {
			if (a[i] > a[i + 1]) {
				change(&a[i], &a[i + 1]);
				shift = i;
			}
		}
		right = shift;
		
		for (int i = right; i > left; i--) {
			if (a[i - 1] > a[i]) {
				change(&a[i - 1], &a[i]);
				shift = i;
			}
		}
		left = shift;
	}
	
	
	for (int i = 0; i < asize; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
}

void change(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
