#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	int N, a[1000], sum = 0;
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + N);
	for(int i = 0; i < N; i++)
	{
		sum += a[i] * (N - i);
	}
	printf("%d", sum);
	return 0;
}
