#include <iostream>
#include <vector>
using namespace std;
vector<int> Wine;
vector<int> D;
int max(int a, int b){
    return a > b ? a : b;
}
int dynamic()
{
    for(int i=3; i<Wine.size(); ++i)
	{
        D.push_back(max(max( D[i-3] + Wine[i-1] + Wine[i], D[i-2] + Wine[i]), D[i-1]));
    }
    return D[Wine.size()-1];
}
int main()
{
    int n;
    cin >> n;
    for (int i=0; i<3; ++i){
        Wine.push_back(0);
        D.push_back(0);
    }
    int k;
    for (int i=0; i<n; ++i){
        cin >> k;
        Wine.push_back(k);
    }
    cout << dynamic() << endl;
}
