#include<iostream>
using namespace std;

int main()
{
    cout << "何人のテストの点数を入力しますか？\n";
    int num;
    cin >> num;

    int* ps = new int[num];

    cout << "人数分の点数を入力してください\n";
    for (int i = 0; i < num; i++) {
        cin >> ps[i];
    }
    
    for (int i = 0; i < num; i++) {
        cout << i + 1 << "番目の人の点数は" << ps[i] << "点です\n";
    }

    delete[] ps;
}
