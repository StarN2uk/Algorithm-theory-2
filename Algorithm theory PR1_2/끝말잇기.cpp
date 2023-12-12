#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string a;
    char c = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
	{
        cin >> a;
        if (c == -1)
        {
            c = a[0];
    	}
		else if (a[0] != c)
		{
		    c = -2;
    	}
	}
    if (c == -2)
    {
    	printf("0");
	}
    else
    {
    	printf("1");
	}
}
