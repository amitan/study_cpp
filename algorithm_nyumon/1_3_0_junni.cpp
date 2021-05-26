#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;

int main()
{
	int a[] = {56, 25, 67, 88, 100, 61, 55, 67, 76, 56};
	int asize = sizeof(a) / sizeof(int);
	int juni[asize];
	
	for (int i = 0; i < asize; i++)
	{
		juni[i] =1;
		for (int j = 0; j < asize; j++)
		{
			if (a[i] < a[j]) {
				juni[i]++;
			}
		}
	}
	
	cout << "得点  順位\n";
	
	for (int i = 0; i < asize; i++) {
		cout << right << setw(3) << a[i] << "    " << juni[i] << "\n";
	}
}