#include<iostream>
using namespace std;

int main()
{
	int a[10], b[10], acount = 0, bcount = 0;
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	for(int i = 0; i < 10; i++)
	{
		if(a[i] > b[i])
		{
			acount++;
		}
		else if(a[i] < b[i])
		{
			bcount++;
		}
		else if(a[i] == b[i])
		{
			acount++;
			bcount++;
		}
	}
	if(acount > bcount)
	{
		printf("A");
	}
	else if(acount < bcount)
	{
		printf("B");
	}
	else if(acount == bcount)
	{
		printf("D");
	}
	return 0;
}
