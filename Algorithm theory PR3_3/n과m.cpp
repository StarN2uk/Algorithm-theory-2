#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
int check[9];
int arr[9];

void dfs(int depth)
{
  if(depth == m)
  {
    for(int i = 0; i < m; i++) 
    	cout << arr[i] << ' ';
  	cout << '\n';
    return;
  }

  for(int i = 1; i <= n; i++)
  {
    if(check[i])
    	continue;
    check[i] = 1;
    arr[depth] = i;
    dfs(depth + 1);
    check[i] = 0;
  }
}

int main()
{
  cin >> n >> m;
  dfs(0);
}
