#include <iostream>
#include<queue>
using namespace std;

struct Que
{
	int x;
	int y;
};

int board[501][501];
bool vis[501][501];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int main()
{
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> board[i][j];
		}
	}
	queue<Que> Q;
	Que q;
	int count = 0;
	int max = 0;
	int area = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (board[i][j] == 1 && vis[i][j] == false)
			{
				Q.push({ i, j });
				vis[i][j] = true;
				count++;
			}
			while (!Q.empty())
			{
				q = Q.front();
				Q.pop();
				area++;
				for (int k = 0; k < 4; k++)
				{
					if (q.x + dx[k]<0 or q.x + dx[k]>=a or q.y + dy[k]<0 or q.y + dy[k]>=b) continue;
					if (board[q.x + dx[k]][q.y + dy[k]] == 1 && vis[q.x + dx[k]][q.y + dy[k]] == false)
					{
						Q.push({q.x + dx[k],q.y + dy[k]});
						vis[q.x+dx[k]][q.y+dy[k]] = true;
					}
				}
			}
			if (max < area)
			{
				max = area;
			}
			area = 0;
		}
	}
	cout << count << endl << max;

}
