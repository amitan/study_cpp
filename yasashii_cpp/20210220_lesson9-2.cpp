#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    cout << "文字列を入力してください\n";
    
    char str[1000];
    cin >> str;

    cout << "文字列の長さは" << strlen(str) << "です\n";
}
