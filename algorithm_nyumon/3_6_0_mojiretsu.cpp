// 文字列の照合
#include<iostream>
using namespace std;

char* search (char *text, char *key);

int main()
{
	char text[] = "This is a pen. That is a pencil";
	char key[] = "pen";
	
	char *p = search(text, key);
	while (p != NULL) {
		cout << p << "\n";
		p = search(p + strlen(key), key);
	}
	
	cout << "\n";
}

char* search (char *text, char *key)
{
	int textLength = strlen(text);
	int keyLength =strlen(key);
	
	char *p;
	for (p = text; p < text+textLength-keyLength; p++)
	{
		if (strncmp(p, key, keyLength) == 0) {
			return p;
		}
	}
	
	return NULL;
}