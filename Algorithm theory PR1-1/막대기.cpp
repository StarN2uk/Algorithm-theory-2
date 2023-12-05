#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a, b[100000], count = 0, max = 0;
	scanf("%d", &a);
	for(int i = 0; i < a; i++)
		scanf("%d", &b[i]);
	for(int i = a - 1; i >= 0; i--)
	{
		if(b[i] > max)
		{
			max = b[i];
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
