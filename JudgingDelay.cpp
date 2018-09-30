#include <bits/stdc++.h>
using namespace std;

int main() {
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
        int n,c=0;
        cin>>n;
        for(int i=0; i<n; ++i)
        {
            int m,n;
            cin>>m>>n;
            if(n-m>5)c++;
        }
        cout<<c<<'\n';
     }
}
