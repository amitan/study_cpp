#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    const char* str = "Hello";
    cout << str << "\n";

    for (int i = 0; i < str[i] != '\0'; i++)
    {
       cout << str[i] << "*";
    }
    cout << "\n";

    cout << "長さは" << strlen(str) << "\n";
}
