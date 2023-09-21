#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int a[1000];
	pair<int, int> b[1000];
	pair<int, int> best;
	int n; 
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	for(int i = 1; i < n; i++)
	{
		b[a[i]].first++;
		b[i].second = i;
	}
	for(int i = 1; i < n; i++)
	{
		if(b[i].first > best.first)
		{
			best.first = b[i].first;
			best.second = b[i].second;
		}
		if(b[i].first == best.first)
		{
			if(best.second < b[i].second)
			{
				best.second = b[i].second;
			}
			else
			{
			}
		}
	}
	printf("%d", best.second);
	return 0;
}
