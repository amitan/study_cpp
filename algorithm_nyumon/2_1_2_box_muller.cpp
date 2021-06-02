#include<iostream>
#include<cmath>
using namespace std;

void brnd(double sig, double m, double *x, double *y);

int main()
{
	int hist[100];
	int histSize = sizeof(hist) / sizeof(int);
	
	for (int i = 0; i < histSize; i++)
	{
		hist[i] = 0;
	}
	
	int CreationNum =1000;
	double x, y;
	for (int i = 0; i < CreationNum; i++)
	{
		brnd(2.5, 10.0, &x, &y);
		hist[(int)x]++;
		hist[(int)y]++;
	}
	
	for (int i = 0; i < 20; i++)
	{
		cout << i << ": " << hist[i] << "\n";
	}
}

void brnd(double sig, double m, double *x, double *y)
{
	double r1 = rand() / (RAND_MAX + 0.1);
	double r2 = rand() / (RAND_MAX + 0.1);
	*x = sig * sqrt(-2 * log(r1)) * cos(2 * 3.14159 * r2) + m;
	*y = sig * sqrt(-2 * log(r1)) * sin(2 * 3.14159 * r2) + m;
}
