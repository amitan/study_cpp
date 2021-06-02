// シェルソート
#include<iostream>
using namespace std;

#define N 100
void change(int *x, int *y);

int main()
{
	int a[N];
	for (int i = 0; i < N; i++)
	{
		a[i] = rand();
	}
	
	int gap = N / 2;
	while (gap > 0) {
		
		for (int k = 0; k < gap; k++) {
			for (int i = k + gap; i < N; i = i + gap) {
				for (int j = i - gap; j >= k; j = j - gap) {
					if (a[j] <= a[j+gap]) {
						break;
					}
					change(&a[j], &a[j+gap]);
				}
			}
		}
		gap = gap / 2;
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
