#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n); vector<int> mxx(n);
        for(int i=0;i<n;++i)
        cin>>v[i];
        for(int i=0;i<n;++i)
        mxx[i] = v[i];
        for(int i=1;i<n;++i)
        {
            for(int j=0;j<i;++j)
            {
                if(v[i]>v[j] && mxx[i]<mxx[j]+v[i])
                {
                    mxx[i] = mxx[j] + v[i];
                }
            }
            
        }
        int mx = *max_element(mxx.begin(),mxx.end());
        cout<<mx<<"\n";
    }
}
