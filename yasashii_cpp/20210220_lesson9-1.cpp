#include<iostream>
using namespace std;

int max(int arrays[]);

int main() {
    cout << "テストの点数を入力してください\n";
    int arrays[5];
    for (int i = 0; i < 5; i++) {
        cin >> arrays[i];
    }

    int maxValue = max(arrays);
    cout << "最高点は" << maxValue << "点です\n";
}

int max(int arrays[])
{
    int max = 0;
    for (int i = 0; i < 5; i++) {
        max = arrays[i] > max ? arrays[i] : max;
    }

    return max;
}
