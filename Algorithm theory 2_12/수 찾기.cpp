#include<iostream>
#include<algorithm>
using namespace std;
int n, m, sum = 0, arr[500000], arr2[500000], a[500000];
int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	sort(arr, &arr[n]);
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for(int i = 0; i < m; i++)
	{
		a[i] = (upper_bound(arr, &arr[n], arr2[i]) - arr) - (lower_bound(arr, &arr[n], arr2[i]) - arr);
	}
	for(int i = 0; i < m; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
