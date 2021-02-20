#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int* pA = &a;

    cout << "変数aの値は" << a << "です\n";
    cout << "変数aのアドレス(&a)は" << &a << "です\n";
    cout << "ポイントpAの値は" << pA << "です\n";
    cout << "*pAの値は" << *pA << "です\n";
}
