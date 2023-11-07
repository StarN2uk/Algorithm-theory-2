#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int arr[100001];
	int n = 0;
	int m = 0;
	scanf("%d %d",&m, &n);
	for(int i = 2; i < 100001; i ++)
	{
		arr[i] = 1;
	}
	for(int i = 2; i <= n; i++)
	{
		if(!arr[i])
		{
			continue;
		}
		for(int j = i * 2; j <= n; j= j + i)
		{
			arr[j] = 0;
		}
	}
	for(int i = m; i <= n; i++)
	{
		if(arr[i] == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
