#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n = 0, t =1;
	string str;
	cin >> str;
	reverse(str.begin(), str.end());
	for(int i = 0; i < str.length();i++)
	{
		n = n + (str[i] - '0') * t;
		t = t * 2;
	}
	printf("%d", n);
	return 0;
}
