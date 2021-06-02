// ポインターソート
#include<iostream>
using namespace std;

#define N 10
void change(int *x, int *y);

int main()
{
	struct girl {
		char name[20];
		int age;
	} *t, *p[N], a[]={"Ann", 18, "Rolla", 19, "Nancy", 16, "Eluza", 17, "Juliet", 18, "Machilda", 20, "Emy", 15, "Candy", 16, "Ema", 17, "Mari", 18};
	
	for (int i = 0; i < N; i++) {
		p[i] = &a[i];
	}
	
	char *min;
	int s;
	for (int i = 0; i < N-1; i++) {
		min = p[i]->name;
		for (int j = i; j < N; j++) {
			if (strcmp(p[j]->name, min) < 0) {
				min = p[j]->name;
				s = j;
			}
		}
		t=p[i]; p[i]=p[s]; p[s]=t;
	}
	
	for (int i = 0; i < N; i++)
	{
		cout << p[i]->name << " " << p[i]->age << "\n";
	}
	cout << "\n";
}

void change(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
