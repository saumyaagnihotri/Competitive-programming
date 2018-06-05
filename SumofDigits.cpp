#include<iostream>
using namespace std;
int main()
{
    int s,n,d;
    cin>>n;
    int sum =0;
    while(n--)
    {
        sum =0;
        cin>>s;
        while(s!=0)
    {
        int d = s%10;
        s = s/10;
        sum = sum + d;
    }
    cout<<sum<<"\n";
    }
}
