#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long b[100000] = {1, 1, }, n, w = 1, h = 1, a;
	scanf("%d", &n);
	for(int i = 2; i < n; i++)
	{
		b[i] = b[i - 2] + b[i - 1];
	}
	for(int i = 1; i < n; i++)
	{
		if(i % 2 == 1)
		{
			h += b[i];
		}
		else
		{
			w += b[i];
		}
	}
	a = (w + h) * 2;
	printf("%lld", a);
	return 0;
}
