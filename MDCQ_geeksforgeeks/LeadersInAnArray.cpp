#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n, m=1;
        cin>>n;
        vector<int> v(n); vector<int> ans; 
        for(int i=0;i<n;++i)
        cin>>v[i];
        int max = v[n-1];
        ans.push_back(max);
        for(int i=n-2;i>=0;--i)
        {
            if(v[i]>=max)
            {
                ans.push_back(v[i]);
                max = v[i];
            }
        }
        reverse(ans.begin(),ans.end());
        for(auto i: ans)
        cout<<i<<" ";
        cout<<"\n";
    }
}
