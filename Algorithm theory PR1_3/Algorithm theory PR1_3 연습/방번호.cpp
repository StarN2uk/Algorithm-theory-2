#include <iostream>
#include <vector>
#include<string>
using namespace std;
#define N 10

int main()
{
	vector<int> v(N);
	string room="";
	int max = 0, c = 0;
	cin >> room;
	for(int i=0; i < room.size(); i++)
	{
		v[room.at(i) -'0']++;
		if(room.at(i) -'0' == 6 || room.at(i) -'0'==9)
		{
			c++;
		}
	}
	for(int i=0; i<N; i++)
	{
		if(i!=6 && i!=9 && max<v[i])
		{
			max=v[i];
		}
	}
	if(max < (c+1) / 2)
	{
		max = (c+1) / 2;
	}
	printf("%d", max) ;
	return 0;
}
