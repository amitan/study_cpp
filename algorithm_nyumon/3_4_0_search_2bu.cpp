// 逐次探索
#include<iostream>
using namespace std;

#define N 10

int main()
{
	int a[N] = {2, 3, 7, 11, 31, 50, 55, 70, 77, 80};
	
	cout << "検索したい数字を入力してください\n";
	
	int key;
	cin >> key;
	
	int lower = 0;
	int upper = N - 1;
	bool flag = false;
	
	while (lower <= upper)
	{
		int index = (lower + upper) / 2;
		if (key == a[index]) {
			cout << "データが見つかりました: index = " << index << "\n";
			flag = true;
			break;
		}
		
		else if (key < a[index]) {
			upper = index - 1;
		}
		else if (key > a[index]) {
			lower = index + 1;
		}
	}
	
	if (!flag)
	{
		cout << "データが見つかりませんでした\n";
	}
}