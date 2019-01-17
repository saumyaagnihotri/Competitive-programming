#include <bits/stdc++.h>
#define int long long int 
using namespace std;

int32_t main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
	    cin>>n>>p;
	    if(n==1||n==2)
	    cout<<p*p*p<<"\n";
	    else{
	    int i = n/2 + 1;
	    //cout<<i<<" ";
	    int af , tf , mf;
	    tf = p-n;
	    af = (p-n)*2 + i;
	    mf = (p-n+i)*(p-n+i);
	    //cout<<af<<" "<<mf<<" "<<tf<<"\n";
	    cout<<af*tf+mf<<"\n";
	    }
	    
	    
	    
    }
	
}
