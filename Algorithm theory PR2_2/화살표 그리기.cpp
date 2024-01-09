#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;

int main()
{
	int N, w_l = 0, b_l = 0;
	vector<pair<int, int> > white;
	vector<pair<int, int> > black;
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if(b == 1)
		{
			white.push_back({a, b});
		}
		if(b == 2)
		{
			black.push_back({a, b}); 
		}
	}
	sort(white.begin(), white.end());
	sort(black.begin(), black.end());
	for(int i = 0; i < white.size(); i++)
	{
		if(white[i].first - white[i - 1].first <= white[i + 1].first - white[i].first)
		{
			w_l += white[i].first - white[i - 1].first;
		}
		if(white[i].first - white[i - 1].first > white[i + 1].first - white[i].first)
		{
			w_l += white[i + 1].first - white[i].first;
		}
	}
	for(int i = 0; i < black.size(); i++)
	{
		if(black[i].first - black[i - 1].first <= black[i + 1].first - black[i].first)
		{
			b_l += black[i].first - black[i - 1].first;
		}
		if(black[i].first - black[i - 1].first > black[i + 1].first - black[i].first)
		{
			b_l += black[i + 1].first - black[i].first;
		}
	}
	printf("%d", w_l + b_l);
	return 0;
}
