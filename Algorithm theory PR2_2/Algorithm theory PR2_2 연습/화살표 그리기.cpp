#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 1000000000

using namespace std;

struct point
{
	int pos;
	int color;
};

vector<point> v;

bool compare(const point& a, const point& b)
{
	if (a.color != b.color)
		return a.color < b.color;
	return a.pos < b.pos;
}

void solve(int N)
{
	long long sum = 0, front, back;

	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			if (N >= 2 && v[i].color == v[i + 1].color)
				sum += (v[i + 1].pos - v[i].pos);
			continue;
		}
		if (i == N - 1)
		{
			if (v[i].color == v[i - 1].color)
				sum += (v[i].pos - v[i - 1].pos);
			break;
		}
		if (v[i].color != v[i - 1].color && v[i].color != v[i + 1].color)
			continue;

		if (v[i].color == v[i - 1].color)
			front = v[i].pos - v[i - 1].pos;
		else
			front = MAX;

		if (v[i].color == v[i + 1].color)
			back = v[i + 1].pos - v[i].pos;
		else
			back = MAX;

		sum += min(front, back);
		
	}

	cout << sum << "\n";
}

int main()
{
	int N;
	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i].pos >> v[i].color;
	}
	sort(v.begin(), v.end(), compare);
	solve(N);
	return 0;
}
