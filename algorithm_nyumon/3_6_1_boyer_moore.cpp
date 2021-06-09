// ボイヤー・ムーア法
#include<iostream>
using namespace std;

#define N 255

char* search(char *text, char *key);
int table[N];

int main()
{
	char text[] = "This is a pen. That is a pencil.";
	cout << "Keyを入力してください\n";
	
	char key[N];
	cin >> key;
	
	int keySize = strlen(key);
	
	// テーブル作成
	
	for (int i = 0; i < N; i++) {
		table[i] = keySize; // 初期化
	}
	
	for (int i = 0; i < keySize - 1; i++) {
		table[key[i]] = keySize - 1 - i;
	}
	
	cout << "table: ";
	for (int i = 0; i < keySize + 1; i++) {
		cout << table[key[i]] << " ";
	}
	cout << "\n";
	
	// 文字列比較
	char *p;
	p = search(text, key);
	while (p != NULL)
	{
		cout << "FOUND: " << p << "\n";
		p =search(p + strlen(key), key);
	}
	
	
	cout << "\n";
}

char* search(char *text, char *key)
{
	int textLength = strlen(text);
	int keyLength =strlen(key);
	char *p;
	
	p = text + keyLength - 1;
	while (p < text + textLength) {
		cout << " compare... " << *p << " and " << key[keyLength - 1] << "\n";
		if (*p == key[keyLength - 1]) {
			cout << " 文字の数だけ全体比較 ... " << p-keyLength+1 << " and " << key << "\n";
			if (strncmp(p-keyLength, key, keyLength)) {
				cout << "一致！ " << *p << "\n";
				return p - keyLength + 1;
			}
		}
		cout << " skip... " << table[*p] << "\n";
		p = p + table[*p];
	}
	
	
	return NULL;
}
