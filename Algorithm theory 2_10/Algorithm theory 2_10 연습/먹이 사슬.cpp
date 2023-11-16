#include<iostream>
#include<algorithm>
using namespace std;
pair<int, int> d[500000];
int lis[500000];
bool cmp(const pair<int, int> left, const pair<int, int> right)
{
	if(left.first == right.first)
	{
		return left.second > right.second;
	}
	return left.first < right.first;
}
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int num;
		scanf("%d %d %d", &num, &d[i].first, &d[i].second);
	}
	sort(d, d + n, cmp);
	int m = 1;
	for(int i = 1; i < n; i++)
	{
		if(!(d[i].first == d[i - 1].first && d[i].second == d[i - 1].second))
		{
			d[m++] = d[i];
		}
	}
	int now = 1;
	lis[0] = d[0].second;
	for(int i = 1; i < m; i++)
	{
		int x = d[i].second;
		if(x <= lis[now - 1])
		{
			lis[now++] = x;
			continue;
		}
		int l = 0, r = now - 1;
		while(l <= r)
		{
			int m = (l + r) / 2;
			if(lis[m] >= x)
			{
				l = m + 1;
			}
			else
			{
				r = m - 1;
			}
		}
		lis[r + 1] = x;
	}
	printf("%d", now);
	return 0;
}
