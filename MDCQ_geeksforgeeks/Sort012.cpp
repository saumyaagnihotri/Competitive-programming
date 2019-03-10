#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,z=0,o=0,t=0; 
	    cin>>n; vector<int> v(n);
	    for(int i=0;i<n;++i)
	    {
	        cin>>v[i];
	        if(v[i]==0) z++;
	        else if(v[i]==1) o++;
	        else t++;
	    }
	    while(z>0 || o>0 || t>0)
	    {
	        if(z>0) { z--; cout<<"0 "; }
	        else if(o>0){ o--; cout<<"1 "; }
	        else if(t>0){ t--; cout<<"2 "; }
	    }
	    cout<<"\n";
	    
	}
}
