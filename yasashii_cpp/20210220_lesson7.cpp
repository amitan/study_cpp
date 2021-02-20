#include<iostream>
using namespace std;

template <class T>
T square(T x) {
    return x * x;
}

int main()
{
    int x;
    cout << "整数を入力してください\n";
    cin >> x;
    
    int rx = square(x);
    cout << x << "の2乗は" << rx << "です\n";

    double dx;
    cout << "小数を入力してください\n";
    cin >> dx;

    double rdx = square(dx);
    cout << dx << "の2乗は" << rdx << "です\n";
}
