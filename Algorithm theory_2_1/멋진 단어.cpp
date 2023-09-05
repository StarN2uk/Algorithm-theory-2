#include<cstdio>
#include<stack>
using namespace std;

int main()
{
	char a[100];
	int check = 0;
	stack<char> s;
	scanf("%s", &a);
	for(int i = 0; a[i]; i++)
	{
		if(a[i] == 'A' || a[i] == 'B')
		{
			s.push(a[i]);
		}
		else
		{
			if(s.empty() )
			{
				printf("YES");
				return 0;
			}
			else if(s.top() != 'A' && a[i] == 'A')
			{
				printf("YES");
				return 0;
			}
			else if(s.top() != 'B' && a[i] == 'B')
			{
				printf("YES");
				return 0;
			}
			s.pop();
		}
	}
	if(!s.empty() || check)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	return 0;
}
