#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str0[20];
    char str1[10];
    char str2[10];

    strcpy(str1, "Hello");
    strcpy(str2, "GoodBy");
    strcpy(str0, str1);
    strcat(str0, str2);

    cout << str1 << "\n";
    cout << str2 << "\n";
    cout << str0 << "\n";
}
