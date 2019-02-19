#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;++i)
        cin>>v[i];
        sort(v.begin(),v.end());
        int f = 0, c=0;
        for(int i=0;i<n;++i)
        {
            if(i<v[i])
            {
                f = 1;
                break;
            }
            c++;
        }
        
        cout<<c<<"\n";
        
     }
}
