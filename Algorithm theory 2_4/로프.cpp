#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, a[100000], best = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++)
	{
		if(best < a[i] * (n - i))
		{
			best = a[i] * (n - i);
		}
	}
	printf("%d", best);
	return 0;
}
