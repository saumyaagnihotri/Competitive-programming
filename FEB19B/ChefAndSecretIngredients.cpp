#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<string> s(n);
	    map<char,int> f;
	    for(int i=0; i<n; ++i)
	    {
	        cin>>s[i];
	        sort(s[i].begin(), s[i].end());
            s[i].erase(std::unique(s[i].begin(), s[i].end()), s[i].end());
	        for(int j=0; j<s[i].size();++j)
	        {
	            f[s[i][j]] = f[s[i][j]] + 1;
	        }
	    }
	    int k = 0;
	    for(auto i : f)
	    {
	        if(i.second==n)
	        {
	            k++;
	        }
	    }
	    //cout<<i.first<<" "<< i.second<<" ";
	    cout<<k<<"\n";
	}
}
