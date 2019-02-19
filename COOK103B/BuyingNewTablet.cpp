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
        int n,b;
        cin>>n>>b;
        int k = n;
        vector<int> v(n);
        for(int i=0;i<n;++i)
        {
            int w,h,p;
            cin>>w>>h>>p;
            if(p<=b)
            v[i] = w*h;
        }
        int mx = *max_element(v.begin(),v.end());
        if(mx==0)
        cout<<"no tablet\n";
        else
        cout<<mx<<"\n";
     }
}
