#include<iostream>
#include<random>
#include<ctime>
using namespace std;

int main()
{
	int num = 20;
	int table[num];
	
	for (int i = 0; i < num; i++)
	{
		table[i] = 0;
	}
	
	srand(time(nullptr));
	for (int i = 0; i < num; i++) {
		do {
			int value = rand() % num + 1;
			bool found = false;
			for (int j = 0; j < num; j++)
			{
				if (value == table[j]) {
					found = true;
					break;
				}
			}
			
			if (!found)
			{
				table[i] = value;
				cout << "value=" << value << "\n";
				break;
			}
			
		} while (true);
	}
}