#include<iostream>
#include<algorithm>
using namespace std;

int A(int x,int y, int ax, int ay)
{
	if(x == ax && y == ay)
	{
		return 1;
	}
	if(x > ax || y > ay)
	{
		return 0;
	}
	return A(x+1, y, ax, ay) + A(x, y+1, ax, ay);
}

int main()
{
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	if(k == 0)
	{
		printf("%d", A(1, 1, n, m));
	}
	else
	{
		int h = (k-1) / m;
		int w = (k-1) % m;
		printf("%d", A(1, 1, h+1, w+1) * A(h+1, w+1, n, m));
	}
	return 0;
}
