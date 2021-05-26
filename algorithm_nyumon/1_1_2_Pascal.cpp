#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;

int combination(int n, int r);

int main()
{
	int totalStep = 12;
	for (int i = 0; i < totalStep + 1; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			if (j == 0) {
				for (int s = 0; s < totalStep - i; s++)
				{
					cout << "  ";
				}
			}
			else {
				cout << " ";
			}
			
			// 組み合わせ計算
			int result = combination(i, j);
			cout << right << setw(3) << result;
		}
		cout << "\n";
	}
}

int combination(int n, int r)
{
	int total = 1;
	for (int i = 1; i <= r; i++) {
		total = total * (n - i + 1) / i;
	}
	return total;
}

