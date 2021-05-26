#include<iostream>
using namespace std;

int main()
{
	int a[] = {35, 25, 56, 78, 43, 66, 71, 73, 80, 90, 0, 73, 35, 65, 100, 78, 80, 85, 35, 50};
	int range = 10;
	
	int histogram[11];
	for (int i = 0; i < range; i++) {
		histogram[i] = 0;
	}
	
	int length = sizeof(a) / sizeof(int);
	cout << length << "(len)\n";
	for (int i = 0; i < length; i++)
	{
		int index = a[i] / range;
		if (index >= 0 && index <= range)
		{
			histogram[index]++;
		}
	}
	
	for (int i = 0; i <= range; i++)
	{
		cout << i * range << " - " << histogram[i] << "\n";
	}
}