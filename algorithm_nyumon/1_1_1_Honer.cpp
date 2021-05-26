#include<iostream>
using namespace std;

int fn(int x, int n, int* array);

int main()
{
	// 5x^4 + 4x^3 +3x^2 + 2x + 1
	int array[] = {1, 2, 3, 4, 5};
	
	int length = sizeof(array) / sizeof(int);
	for (int x = 0; x <= length; x++)
	{
		int answer = fn(x, length - 1, array);
		cout << "f(" << x << ")=" << answer << "\n";
	}
}

int fn(int x, int index, int *array)
{
	int answer = array[index];
	for (int i = index - 1; i>= 0; i--)
	{
		answer = answer * x + array[i];
	}
	return answer;
}
