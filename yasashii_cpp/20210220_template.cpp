#include<iostream>
using namespace std;

template<class T>
T maxt(T num1, T num2)
{
    return num1 > num2 ? num1 : num2;
}

int main()
{
    int int1, int2;
    cout << "2つの整数を入力してください\n";
    cin >> int1 >> int2;

    int rInt = maxt(int1, int2);
    cout << "整数値の最大値は" << rInt << "です\n";

    double d1, d2;
    cout << "2つの小数を入力してください\n";
    cin >> d1 >> d2;

    double rDouble = maxt(d1, d2);
    cout << "整数値の最大値は" << rDouble << "です\n";
}
