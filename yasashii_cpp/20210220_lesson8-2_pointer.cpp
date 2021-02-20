#include<iostream>
using namespace std;

void add(int* x, int* y, int diff);

int main()
{
    cout << "2科目分の点数を入力してください\n";
    
    int x, y;
    cin >> x >> y;

    cout << "加算する点数を入力してください\n";
    
    int diff;
    cin >> diff;
    add(&x, &y, diff);

    cout << diff << "点加算したので\n";
    cout << "科目1は" << x << "点となりました\n";
    cout << "科目2は" << y << "点となりました\n";
}

void add(int* px, int* py, int diff)
{
    *px += diff;
    *py += diff;
}
