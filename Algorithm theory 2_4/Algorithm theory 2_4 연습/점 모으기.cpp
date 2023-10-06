#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> vx;
vector<int> vy;

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int y, x;
		cin >> y >> x;
		vy.push_back(y);
		vx.push_back(x);
	}
	sort(vy.begin(), vy.end());
	sort(vx.begin(), vx.end());
	int mx = vx[m / 2];
	int my = vy[m / 2];
	int ans = 0;
	for (int i = 0; i < m; i++) {
		ans += abs(vx[i] - mx) + abs(vy[i] - my);
	}
	cout << ans;
	return 0; 
}
