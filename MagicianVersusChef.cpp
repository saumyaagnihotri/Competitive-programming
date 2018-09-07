#include <bits/stdc++.h>
using namespace std;

int main() {
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
        int N, x, s;
        vector<int> v;
        cin>>N>>x>>s;
        for(int i =1; i<=N; i++)
        v.push_back(i);
        while(s!=0)
        {
            int a, b;
            cin>>a>>b;
            swap(v[b-1],v[a-1]);
             
            s--;
            
        }
        for(int i=0; i<v.size();i++)
        {
            if(x==v[i])
            {
                cout<<i+1<<'\n';
                break;
            }
            
        }
        
     }
}
