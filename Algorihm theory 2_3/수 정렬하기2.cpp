#include<iostream>
using namespace std; 
int main()
{
	int N;
	int in;
    scanf("%d", &N);
    int input[10001]={0};
    for(int i=0;i<N;i++)
	{
        scanf("%d", &in);
        input[in]+=1;
    }
    for (int i=1; i<10001;i++)
	{
        for (int j=0; j<input[i];j++)
		{
            printf("%d\n", i);
        }
    }
    return 0;
}
