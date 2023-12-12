#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[10], b[10], acount = 0, bcount = 0, cw = 0;
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
		if(a[i] == b[i])
		{
			acount++;
			bcount++;
		}
		if(a[i] > b[i])
		{
			acount+=3;
			cw = 'A';
		}
		if(a[i] < b[i])
		{
			bcount+=3;
			cw = 'B';
		}
	}
	if(acount == bcount)
	{
		printf("%d %d\n", acount, bcount);
		if(cw == 'A')
		{
			printf("A");
		}
		if(cw == 'B')
		{
			printf("B");
		}
		if(cw == 0)
		{
			printf("D");
		}
	}
	if(acount > bcount)
	{
		printf("%d %d\n", acount, bcount); 
		printf("A");
	}
	if(acount < bcount)
	{
		printf("%d %d\n", acount, bcount); 
		printf("B");
	}
	return 0;
}
