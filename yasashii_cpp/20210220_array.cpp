#include<iostream>
using namespace std;

int main()
{
    int array[5] = {80, 70, 60, 50, 40};

    cout << "test[0]の値は" << array[0] << "です\n";
    cout << "test[0]のアドレスは" << &array[0] << "です\n";
    cout << "testの値は" << array << "です\n";
    cout << "つまり*testの値は" << *array << "です\n";
    cout << "test+1の値は" << array + 1 << "です\n";
    cout << "*(test+1)の値は" << *(array + 1) << "です\n";
}
