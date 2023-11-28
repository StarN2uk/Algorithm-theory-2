#include<iostream>
#include<algorithm>
using namespace std;
int n, m, sum = 0, arr[500000], arr2[500000];
int binarysearch(int num)
{
	int l = 0;
	int r = n - 1;
	while(l <= r)
	{
		int mid = (l+r)/2;
		if(arr[mid] == num)
		{
			return 1;
		}
		else if(arr[mid] > num)
		{
			r = mid-1;
		}
		else
		{
			l = mid+1;
		}
	}
	return 0;
}
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
		printf("%d ", binarysearch(arr2[i]));
	}
	return 0;
}
