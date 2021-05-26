#include<iostream>
using namespace std;

int combination(int i, int j);

int main()
{
	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			int answer=combination(i, j);
			cout << i << "C" << j << "=" << answer << " ";
		}
		cout << "\n";
	}
}

int combination(int n, int r)
{
	if (r == 0) {
		return 1;
	}
	// 先に割ると小数になってしまって切り捨てられる
	int factor = (n - r + 1) * combination(n, r-1) / r;
	return factor;
}
