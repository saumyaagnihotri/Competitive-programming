#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int sum = 0;
        for(int i = 0; i< 5; i++)
        {
            int k;
            cin>>k;
            sum = sum + k;
        }
        if(sum==0)cout<<"Beginner\n";
        else if(sum==1)cout<<"Junior Developer\n";
        else if(sum==2)cout<<"Middle Developer\n";
        else if(sum==3)cout<<"Senior Developer\n";
        else if(sum==4)cout<<"Hacker\n";
        else if(sum==5)cout<<"Jeff Dean\n";
    }
} 