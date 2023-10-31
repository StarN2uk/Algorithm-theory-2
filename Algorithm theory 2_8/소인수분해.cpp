#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int n, a = 2;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(n % a == 0)
			{
				n /= a;
				printf("%d", a);
			}
			else if(n % a != 0)
			{
				a += 1;
			}
		}
	}
	return 0;
}
