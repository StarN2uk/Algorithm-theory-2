#include<iostream>
#include<algorithm>
using namespace std;
int a[10000], b[10000];
int card[21];
const int N = 20, M = 10;
void reverse(int left, int right)
{
	int i, j, temp;
	for(i = left, j = right; i < j; i++, j--)
	{
		temp = card[i];
		card[i] = card[j];
		card[j] = temp;
	}
}

int main()
{
	int i;
	int a, b;
	for(i = 1; i <= N; i++) card[i] = i;
	for(i = 1; i <= M; i++)
	{
		scanf("%d %d", &a, &b);
		reverse(a, b);
	}
	for(i = 1; i <= N; i++) printf("%d ", card[i]);
	return 0;
}
