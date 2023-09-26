#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, a[100000];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	printf("%d ", a[0]);
	for(int i = 1; i < n; i++)
	{
		if(a[i] == a[i - 1])
		{
			printf("");
		}
		else
		{
			printf("%d ", a[i]);
		}
	}
	return 0;
}
