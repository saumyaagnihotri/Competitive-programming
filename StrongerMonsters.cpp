/*
C++ for Competitive Programming
Tutorial 10: Stronger Monsters


*/
#include <iostream>
using namespace std;

int main()
{
    int N,K,n;
    cin>>N>>K;
    int sum = 0;
    for(int i=1; i<=N;i++)
    {
        cin>>n;
        if(n%K==0)
            continue;
        else
            sum = sum+1;
    }
    cout<<sum;
}