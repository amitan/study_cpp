#include<iostream>
using namespace std;
int main()
{
    cout << "テストの点数を入力してください（0で終了）\n";
    int x = 0;
    int total = 0;
    do {
        cin >> x;
        total += x;
    } while(x != 0);
    
    cout << "テストの合計点は" << total << "点です\n";
}
