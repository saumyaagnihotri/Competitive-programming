#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    vector<int> v2(n-1);
	    for(int i=1; i<n; ++i) cin>>v2[i-1];
	    int s1 = accumulate(v2.begin(),v2.end(),0);
	    int s = (n*(n+1))/2;
	    cout<<s - s1<<"\n";
	    
	}
}
