#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int m, n, sum = 0, min = 10001;
	scanf("%d %d", &m, &n);
	for(int i = 0; i*i<=n;i++)
	{
		if(i*i>=m&&i*i<=n)
		{
			sum = sum + (i*i);
			if(i*i < min)
			{
				min = i*i;
			}
		}
	}
	if(sum==0)
	{
		printf("-1");
	}
	else
	{
		printf("%d\n%d", sum, min);
	}
	return 0;
}  
