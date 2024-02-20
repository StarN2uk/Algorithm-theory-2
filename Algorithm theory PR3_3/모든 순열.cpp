#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;

int cnt, n;
bool check[8] = {false, };
vector<int> v[8];

void dfs(int x)
{
	if(cnt == n)
		printf("%d", n);
	check[x] = true;
	for(int i = 0; i < v[x].size(); i++)
	{
		v[i].push_back(i);
		if(check[v[x][i]] = false)
		{
			dfs(v[x][i]);
			check[x] = false;
			cnt++;
		}
	}
}

int main(void)
{
	scanf("%d", &n);
	dfs(0);
	return 0;
}
