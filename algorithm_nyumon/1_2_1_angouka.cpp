#include<iostream>
using namespace std;

int main()
{
	char table[] = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 
					'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 
					'X', 'C', 'V', 'B', 'N', 'M', '?'};
	const char *ango = "KSOIDHEPZ";
	int index;
	
	for (int i = 0; i < ango[i] != '\0'; i++)
	{
		if (ango[i] >= 'A' && ango[i] <= 'Z')
		{
			index =ango[i] - 'A';
		}
		else
		{
			index = sizeof(table)  / sizeof(char) - 1;
		}
		
		cout << table[index];
	}
	cout << "\n";
}