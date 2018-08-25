#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     ll t;
     cin>>t;
     while(t--)
     {
        int n;cin>>n;
        vector<int>v(n);
        int ans = INT_MAX;
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        if(v[i+1]-v[i]<ans)ans = v[i+1]-v[i];
        cout<<ans<<'\n';
     }
}

