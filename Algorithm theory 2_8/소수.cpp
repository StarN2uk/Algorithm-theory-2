#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, count = 0;
	scanf("%d", &n);
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			printf("-1");
			break;
		}
		count++;
	}
	if(count >= n - 3)
	{
		printf("YES");
	}
	return 0;
}
