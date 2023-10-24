#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>

int main()
{
	int a, d[11] = {0, 1, 2, 4}, t[1000];
	scanf("%d", &a);
	for(int i = 0; i < a; i++)
	{
		scanf("%d", &t[i]);
	}
	for(int i = 4; i <= 10; i++)
	{
		d[i] = d[i - 3] + d[i - 2] + d[i - 1];
	}
	for(int i = 0; i < a; i++)
	{
		printf("%d\n", d[t[i]]);
	}
	return 0;
}
