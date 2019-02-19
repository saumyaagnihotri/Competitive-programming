#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i)
    cin>>v[i];
    int mn = *min_element(v.begin(),v.end());
    int sum = accumulate(v.begin(),v.end(),0);
    int res = sum;
    for(int i=0;i<n;++i)
    {
        for(int d = 1; d<=v[i];++d)
        {
            if(v[i]%d==0)
            {
                int cur = sum - mn - v[i];
                cur+= mn*d + v[i]/d;
                res = min(res,cur);
            }
        }
    }
    cout<<res<<endl;
}