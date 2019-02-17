#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,store=0,f=0;
	    cin>>n;
	    vector<int> a(n);
	    vector<int> b(n);
	    map<int , pair<int, int> > m;
	    for(int i =0; i<n; ++i) cin>>a[i];
	    for(int i =0; i<n; ++i) cin>>b[i];
	    for(int i =0; i<n; ++i) m[i] = { a[i] , b[i] };
	    for(int i =0; i<n; ++i) 
	    {
	        if(i==0)
	        {
	            if(m[i].second>m[n-1].first && m[i].second>m[i+1].first && m[i].second > (m[i+1].first + m[n-1].first)  )
	            {
	                if(m[i].second>store)
	                store = m[i].second;
	                f = 1;
	            }
	        }
	        else if(i==(n-1))
	        {
	            if(m[i].second>m[0].first && m[i].second>m[i-1].first && m[i].second> (m[i-1].first + m[0].first)  )
	            {
	                if(m[i].second>store)
	                store = m[i].second;
	                f = 1;
	            }
	        }
	        else
	        {
	            if(m[i].second>m[i+1].first && m[i].second>m[i-1].first && m[i].second> (m[i-1].first + m[i+1].first)  )
	            {
	                if(m[i].second>store)
	                store = m[i].second;
	                f = 1;
	            }
	        }
	    }
	    if(f==1)
	    cout<<store<<"\n";
	    else cout<<-1<<"\n";
	    
	}
}
