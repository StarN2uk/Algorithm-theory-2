#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;
int main()
{
	int n, a;
	cin >> n;
	v.push_back(0);
	for(int i = 0; i < n; i++)
	{
		cin >> a;
		if(a > v.back())
		{
			v.push_back(a);
		}
		else
		{
			int index = lower_bound(v.begin(), v.end(), a) - v.begin();
			v[index] = a;
		}
	}
	cout << v.size();
	return 0;
}
