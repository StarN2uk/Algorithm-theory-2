#include <iostream>
#include <queue>
using namespace std;
 
int N, M, T, K;
int X[100], Y[100];
 
int convertX(int x, int y)
{
    return x - y;
}
 
int convertY(int x, int y)
{
    return x + y;
}
 
void init()
{
    cin >> N >> M >> T >> K;
    int x, y;
    for (int i = 0; i < T; ++i)
    {
        cin >> x >> y;
        X[i] = convertX(x, y);
        Y[i] = convertY(x, y);
    }
}
 
int main()
{
    init();
    int x, y;
    int num, ans = 0, ansX, ansY;
    queue<int> xQ, yQ;
    for (int i = 0; i < T; ++i)
        for (int j = 0; j < T; ++j)
        {
            x = X[i];
            y = Y[j];
            if ((x + y) % 2)
            {
                xQ.push(x), xQ.push(x), xQ.push(x - 1), xQ.push(x + 1);
                yQ.push(y + 1), yQ.push(y - 1), yQ.push(y), yQ.push(y);
            }
            else
                xQ.push(x), yQ.push(y);
 
            while (!xQ.empty())
            {
                num = 0;
                x = xQ.front(), xQ.pop();
                y = yQ.front(), yQ.pop();
                int u = y-x;
                if (x + y + K > 2 * N)
                    x = N - u/2 - K/2, y = N + u/2 - K/2;
 
                for (int k = 0; k < T; ++k)
                    if (X[k] >= x && X[k] <= x + K && Y[k] >= y && Y[k] <= y + K)
                        ++num;
                if (ans < num)
                {
                    ans = num;
                    ansX = x + K / 2;
                    ansY = y + K / 2;
                }
            }
        }
    cout << (ansX + ansY) / 2 << " " << (ansY - ansX) / 2 << "\n";
    cout << ans;
}

