#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(2*n);
        for(int i=0; i<n; ++i)
        {
            cin>>v[2*i]>>v[2*i+1];
        }
        sort(v.begin(),v.end());
        for(int i=0; i<m; ++i)
        {
            int p; cin>>p;
            int low = (int)( lower_bound(v.begin(),v.end(),p+1)-v.begin() );
            if(low == 2*n) cout<<"-1\n";
            else
            {
                if(low%2==1) cout<<"0\n";
                else cout<<v[low]-p<<'\n';
            }
        }
    }
}