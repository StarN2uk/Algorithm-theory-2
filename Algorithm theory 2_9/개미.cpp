#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a, b, x, y, h, xy, yx;
	scanf("%d %d %d %d %d", &a, &b, &x, &y, &h);
	xy = (x + h)%(a * 2);
	yx = (y + h)%(b * 2);
	if(xy>a) xy = a * 2 - xy;
	if(yx>b) yx = b * 2 - yx;
	printf("%d %d", xy, yx);
	return 0;
}
