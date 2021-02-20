#include<iostream>
using namespace std;

double ave(int* pa);

int main()
{
    int array[5];
    cout << "5人のテストの点数を入力してください\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    double result = ave(array);
    cout << "5人の平均点は" << result << "です\n";
}

double ave(int* pa)
{
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += pa[i];
    }
    return (double)total/5;
}
