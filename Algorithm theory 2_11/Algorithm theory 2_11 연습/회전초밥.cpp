#include<iostream>
#include<algorithm>
using namespace std;
int arr[10000];
int cnt[1000];
int now = 0;
void In(int a)
{
	if(!cnt[a])
	{
		now++;
	}
	cnt[a]++;
}
void Out(int a)
{
	cnt[a]--;
	if(!cnt[a])
	{
		now--;
	}
}
int main()
{
	int n, a, b, c;
	scanf("%d %d %d %d", &n, &a, &b, &c);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}
	for(int i = 0; i < b - 1; i++)
	{
		arr[n + i] = arr[i];
	}
	In(c);
	for(int i = 0; i < b - 1; i++)
	{
		In(arr[i]);
	}
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		In(arr[i + b - 1]);
		ans = max(ans, now);
		Out(arr[i]);
	}
	printf("%d", ans);
	return 0;
}
