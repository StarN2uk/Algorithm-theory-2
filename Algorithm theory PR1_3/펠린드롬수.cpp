#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string N;
    while (N != "0")
	{
        cin >> N;
        string a = N;
        reverse(N.begin(), N.end());
        if(N == "0")
		{
            break;
        }
        else if(N == a)
		{
            printf("yes\n");
        }
		else
		{
            printf("no\n");
        }
    }  
}
