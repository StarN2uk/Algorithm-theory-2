#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N, M, first, last, num, sum[100000];
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
	{
        scanf("%d", &num);
        sum[i] = sum[i-1] + num;
    }
    scanf("%d", &M);
    while(M--)
	{
        scanf("%d %d", &first, &last);
        printf("%d\n", sum[last] - sum[first-1]);
    }
}
