#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int n, cnt = 0;
char grid[101][101];
string input;
bool visited[101][101];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int nowx, int nowy)
{
	if(visited[nowx][nowy])
		return;
	visited[nowx][nowy] = true;
	for (int i = 0; i < 4; i++)
	{
		int X = dx[i] + nowx; 
		int Y = dy[i] + nowy;
		if ((grid[nowx][nowy] == grid[X][Y]) && !visited[X][Y])
			dfs(X, Y);
	}
}

int main(void)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < n; j++)
		{
			grid[i][j] = input[j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j])
			{
				dfs(i, j);
				cnt++;
			}
		}
	}
	printf("%d ", cnt);
	cnt = 0;
	memset(visited, false, sizeof(visited));
	for (int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if (grid[i][j] == 'G')
				grid[i][j] = 'R';
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j])
			{
				dfs(i, j); 
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}
