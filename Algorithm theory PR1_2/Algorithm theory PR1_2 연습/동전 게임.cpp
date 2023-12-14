#include <bits/stdc++.h>
#define x first
#define y second
#define all(v) v.begin(), v.end()
#define compress(v) sort(all(v)), v.erase(unique(all(v)), v.end())
#define IDX(v, x) (lower_bound(all(v), x) - v.begin())
using namespace std;

using uint = unsigned;
using ll = long long;
using ull = unsigned long long;

int main(){
    int K, T; cin >> K >> T;
    while(T--){
        int M, N; cin >> M >> N;
        if(M == N){ cout << "1\n"; continue; }
        int rem = K - max(M, N), d = abs(M - N);
        if(M > N && d - rem <= 2) cout << "1\n";
        else if(M < N && d - rem <= 1) cout << "1\n";
        else cout << "0\n";
    }
}
