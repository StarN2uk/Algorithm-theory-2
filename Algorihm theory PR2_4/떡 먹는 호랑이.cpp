#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int d, k, x, y, a[100] = {1, 1, }, b[100] = {0, 1, };
	scanf("%d %d", &d, &k);
	for(int i = 2; i < d; i++)
	{
		a[i] = a[i - 2] + a[i - 1];
		b[i] = b[i - 2] + b[i - 1];
	}
	for(int i = 1; i < k; i++)
	{
		if((k - a[d - 1] * i) % b[d - 1] == 0)
		{
			x = i;
			y = (k - a[d - 1] * i) / b[d - 1];
		}
	}
	printf("%d\n %d", x, y);
	return 0;
}
