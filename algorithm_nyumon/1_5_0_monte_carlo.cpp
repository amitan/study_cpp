#include<iostream>
#include<random>
#include<ctime>
using namespace std;

double randZeroOne();

int main()
{
	srand(time(nullptr));
	int num = 100000;
	int in = 0;
	for (int i = 0; i < num; i++) {
		double x = randZeroOne();
		double y = randZeroOne();
		if (x * x + y * y <= 1)
		{
			in++;
		}
	}
	
	double result = 4 * in / (double)num;
	cout << "π=" << result << "\n";
}

double randZeroOne()
{
	return (double)rand() / RAND_MAX;
}