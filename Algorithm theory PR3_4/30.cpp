#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

vector<int> v;

int main()
{
	int i = 0, sum = 0;
	string n;
	cin >> n;
	for(int j = 0; j < n.length(); j++)
	{
		v.push_back(n[j] - '0');
	}
	sort(v.begin(), v.end());
	for(int j = 0; j < v.size(); j++)
	{
		sum += v[j];
	}
	if(sum % 3 == 0 && v[0] == 0)
	{
		reverse(v.begin(), v.end());
		for(int k = 0; k < v.size(); k++)
		{
			cout << v[k];
		}
		return 0;
	}
	cout << "-1";
	return 0;
}
