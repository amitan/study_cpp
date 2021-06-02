// 逐次探索
#include<iostream>
using namespace std;

#define N 10

int main()
{
	struct girl {
		char name[20];
		int age;
	} a[]={"Ann", 18, "Rolla", 19, "Nancy", 16, "Eluza", 17, "Juliet", 18, "Machilda", 20, "Emy", 15, "Candy", 16, "Ema", 17, "Mari", 18};
	
	cout << "検索したい名前を入力してください\n";
	
	char key[20];
	cin >> key;
	
	int foundIndex = -1;
	for (int i = 0; i < N; i++)
	{
		if (strcmp(a[i].name, key) == 0) {
			foundIndex = i;
			break;
		}
	}
	
	if (foundIndex >= 0) {
		cout << "データが見つかりました: " << a[foundIndex].name << ", " << a[foundIndex].age << "\n";
	} else {
		cout << "データが見つかりませんでした\n";
	}
}