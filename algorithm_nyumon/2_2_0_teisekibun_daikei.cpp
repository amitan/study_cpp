// 台形則による定積分
#include<iostream>
#include<cmath>
using namespace std;

#define f(x) (sqrt(4.0 - x * x))

int main()
{
	cout << "積分区間a, bを入力してください\n";
	
	double a, b;
	cin >> a >> b;
	double n = 50; // 分割数
	double h = (b - a) / n; // 区間幅
	
	double s = 0;
	double x = a;
	for (int i = 1; i <= n - 1; i++) {
		x = x + h;
		s = s + f(x);
	}
	double temp = f(a) + f(b);
	double result = h * ( temp *0.5 + s);
	
	cout << "result = " << result << "\n";
}
