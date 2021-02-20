#include<iostream>
using namespace std;

int count(char str[], char ch);

int main()
{
    cout << "文字列を入力してください\n";

    char str[1000];
    cin >> str;

    cout << "文字列から探す文字を入力してください\n";
    char target;
    cin >> target;

    int length = count(str, target);
    cout << str << "の中には" << target << "は全部で" << length << "個あります\n";
}

int count(char str[], char ch)
{
    int total = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
        {
            total++;
        }
    }
    return total;
}
