#include<iostream>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

vector<int> v[10001];
vector<int> bfsResult;
vector<int> dfsResult;
bool check[1001];

void bfs(int x)
{
	queue<int> q;
	q.push(x);
	check[x] = true;
	while(!q.empty())
	{
		int n = q.front();
		q.pop();
		bfsResult.push_back(n);
		for(int i = 0; i < v[n].size(); i++)
		{
			if(check[v[n][i]] == false)
			{
				q.push(v[n][i]);
				check[v[n][i]] == true;
			}
		}
	}
}

void dfs(int x)
{
	check[x] = true;
	dfsResult.push_back(x);
	for(int i = 0; i < v[x].size(); i++)
	{
		if(check[v[x][i]] = false)
		{
			dfs(v[x][i]);
		}
	}
}
int main()
{
	int n,m,a,b,start;
	scanf("%d %d %d", &n,&m,&start);
	for(int i = 1; i <= m; i++)
	{
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i = 1; i <= n; i++)
	{
		sort(v[i].begin(), v[i].end());
	}
	bfs(start);
	memset(check, false, sizeof(check));
	dfs(start);
	for(int i = 0; i < dfsResult.size(); i++)
	{
		cout << dfsResult[i] << " ";
	}
	cout << "\n";
	for(int i = 0; i < bfsResult.size(); i++)
	{
		cout << bfsResult[i] << " ";
	}
	return 0;
}
