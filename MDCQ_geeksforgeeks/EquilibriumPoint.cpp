#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, f=0, ans,left_sum=0;
	    cin>>n; vector<int> v(n);
	    for(int i=0;i<n;++i) cin>>v[i];
	    int sum = accumulate(v.begin(),v.end(),0);
	    for(int i=0;i<n;++i) 
	    {
	        
	        sum-= v[i];
	        if(left_sum==sum)
	        {
	            f = 1;
	            ans = i;
	            //cout<<left_sum<<" "<<check_sum<<" "<<i<<"\n";
	            break;
	            
	        }
	        
	        left_sum+=v[i];
	    }
	    if(f==1)
	    cout<<ans+1<<"\n";
	    else cout<<"-1\n";
	    
	    
	}
}
