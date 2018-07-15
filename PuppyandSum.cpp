#include<bits/stdc++.h>
using namespace std;
int puppySum(int d, int n)
{
    if(d==0)
    return n;
    else
    return puppySum(d-1, (n*(n+1))/2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d, n, t;
        cin>>d>>n;
        t = puppySum(d,n);
        cout<<t<<'\n';
    }
} 