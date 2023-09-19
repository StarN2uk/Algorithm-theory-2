#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	int n, a[1000];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n, );
	for(int i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
