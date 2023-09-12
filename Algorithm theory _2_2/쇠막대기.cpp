#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
	stack<char> a;
	int sum = 0;
	char b[100001];
	cin >> b;
	for(int i = 0; b[i]; i++)
	{
		if(b[i] == '(')
		{
			a.push(b[i]);
		}
		if(b[i] == ')' && b[i - 1] == '(')
		{
			a.pop();
			sum = sum + a.size();
		}
		else if(b[i] == ')' && b[i - 1] != '(')
		{
			a.pop();
			sum++;
		}
	}
	cout << sum;
	return 0;
}
