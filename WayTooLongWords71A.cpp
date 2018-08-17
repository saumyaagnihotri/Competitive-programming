#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string k;
        cin>>k;
        if(k.length()<=10)
        {
            cout<<k<<'\n';
        }
        else
        cout<<k[0]<<k.length()-2<<k[k.length()-1]<<'\n';
        
    }
}
