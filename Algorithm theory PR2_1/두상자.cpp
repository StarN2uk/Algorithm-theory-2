#include<iostream>
#include<algorithm>
using namespace std;

struct data
{
	int x1, y1, x2, y2;
}a, b;

int main()
{
	scanf("%d %d %d %d", &a.x1, &a.y1, &a.x2, &a.y2);
	scanf("%d %d %d %d", &b.x1, &b.y1, &b.x2, &b.y2);
	if(a.x1 > b.x2 || a.y1 > b.y2 || a.x2 < b.x1 || a.y2 < b.y1)
		printf("NULL\n");
	else if((a.x1 == b.x2 || a.x2 == b.x1) && (a.y1 == b.y2 || a.y2 == b.y1))
		printf("POINT\n");
	else if((a.x1 == b.x2 || a.x2 == b.x1) || (a.y1 == b.y2 || a.y2 == b.y1))
		printf("LINE\n");
	else
		printf("FACE\n");
	return 0;
}
