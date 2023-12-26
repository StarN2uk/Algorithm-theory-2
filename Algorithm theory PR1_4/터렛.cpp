#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N, x1, y1, r1,  x2, y2, r2, d, c1, c2;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        c1 = (r1 - r2) * (r1 - r2);
        c2 = (r1 + r2) * (r1 + r2);
        if(d == 0)
        {
            if(c1 == 0)
            {
            	printf("-1\n");
			}
            else
            {
            	printf("0\n");
			}
        }
        else if (d == c1 || d == c2)
        {
        	printf("1\n");
		}
        else if (c1 < d && d < c2)
        {
        	printf("2\n");
		}
        else
		{
			printf("0\n");
		}
    }

}
