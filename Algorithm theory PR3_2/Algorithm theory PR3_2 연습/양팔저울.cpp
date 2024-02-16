#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
int Map[14];
int Cnt = 0;
int S = 0;
vector<bool> Measure;

void Input()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> Map[i];
		S += Map[i];
	}
	Measure.resize(S + 1, false);
}

void Dfs(int count, int weight)
{	
	if (count == N + 1)
	{
		if (weight > 0)
		{
			Measure[weight] = true;
		}
		return;
	}
	Dfs(count + 1, weight);
	Dfs(count + 1, weight + Map[count]);
	Dfs(count + 1, weight - Map[count]);
}

int main()
{
	Input();
	Dfs(1, 0);
	for (int i = 1; i <= S; i++)
	{
		if (Measure[i] == false)
		{
			Cnt++;
		}
	}
	cout << Cnt << '\n';
}
