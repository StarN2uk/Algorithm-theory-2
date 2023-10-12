#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 1001
#define MAX_P 10001
int i, j, N, result;
int dp[MAX_N], price[MAX_P];
void input()
{
 cin >> N;
 for (i = 1;i <= N;i++) cin >> price[i];
}
void cal()
{ 

 dp[1] = price[1];

 for (i = 2; i <= N; i++) 
 {
   dp[i] = price[i];

  for (j = 1; j < i; j++)

  {

   dp[i] = max(dp[i], price[j] + dp[i - j]);

  }

 }
 result = dp[N];
}
int main()
{
  input(); cal();
  cout << result << endl;

}
