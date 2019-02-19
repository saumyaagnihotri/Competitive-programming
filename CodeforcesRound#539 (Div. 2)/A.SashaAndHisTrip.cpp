#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin>>n>>v;
    int s = min(v,n-1);
    int l = s;
    for(int i=2; i<n;++i)
    {
        l--;
        if((n-i)>l)
        {
            s = s + i;
            l++;
        }
        //cout<<s<<" ";
    }
    cout<<s;
    
}