// 逐次探索
#include<iostream>
using namespace std;

#define N 10

int main()
{
	struct girl {
		char name[20];
		int age;
	} a[N+1]={"Ann", 18, "Rolla", 19, "Nancy", 16, "Eluza", 17, "Juliet", 18, "Machilda", 20, "Emy", 15, "Candy", 16, "Ema", 17, "Mari", 18};
	
	cout << "検索したい名前を入力してください\n";
	
	char key[20];
	cin >> key;
	
	strcpy(a[N].name, key);
	
	int index;
	while (strcmp(a[index].name, key) != 0)
	{
		index++;
	}
	
	if (index < N) {
		cout << "データが見つかりました: " << a[index].name << ", " << a[index].age << "\n";
	} else {
		cout << "データが見つかりませんでした\n";
	}
}