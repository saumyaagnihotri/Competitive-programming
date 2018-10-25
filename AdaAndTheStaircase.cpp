#include <bits/stdc++.h>
using namespace std;

int main() {
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; ++i)
        {
            cin>>v[i];
        }
        int s =0;
        for(int i=1; i<n; ++i)
        {
            s+=(v[i]-v[i-1]-1)/k;
        }
        s+= (v[0]-1)/k;
        cout<<s<<'\n';
     }
}