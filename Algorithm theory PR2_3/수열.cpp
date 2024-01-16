#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N, K, a[100000], sum = 0, best = 0;
	scanf("%d %d", &N, &K);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
		if(i < K)
		{
			sum += a[i];
		}
		if(i >= K)
		{
			sum += a[i] - a[i - K];
		}
		if(best < sum)
		{
			best = sum;
		}
	}
	printf("%d", best);
	return 0;
}
