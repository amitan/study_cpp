#include<iostream>
using namespace std;

int max(int num1, int num2);

int main()
{
    int num1 = 0;
    int num2 = 0;
    cout << "1番目の整数を入力してください\n";
    cin >> num1;
    cout << "2番目の整数を入力してください\n";
    cin >> num2;
    int result = max(num1, num2);
    cout << "最大値は" << result << "です\n";
}

int max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}
