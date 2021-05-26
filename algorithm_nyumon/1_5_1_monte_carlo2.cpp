#include<iostream>
#include<random>
#include<ctime>
using namespace std;

double randZeroOne();

int main()
{
	int num = 1000;
	int in = 0;
	srand(time(nullptr));
	for (int i = 0; i < num; i++)
	{
		double x = randZeroOne() * 2;
		double y = randZeroOne();
		
		if (x * x / 4 + y * y <= 1)
		{
			in++;
		}
	}
	
	double result = 4 * 2 * in / (double)num;
	cout << "楕円の面積=" << result << "\n";
}

double randZeroOne()
{
	return (double)rand() / RAND_MAX;
}