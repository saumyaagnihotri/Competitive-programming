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
        int n,a=0,b=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
            if(v[i]>0) b++;
            else if(v[i]==0) continue; 
            else a++;
        }
        if(a==0)
        cout<<n<<" "<<n<<"\n";
        else cout<<max(a,b)<<" "<<min(a,b)<<"\n";
     }
}
