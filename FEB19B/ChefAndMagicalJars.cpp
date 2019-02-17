#include <iostream>
#define int long long int
using namespace std;

int32_t main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s=0;
	    cin>>n;
	    for(int i=0; i<n; ++i)
	    {
	        int a;
	        cin>>a;
	        s = s + (a-1);
	    }
	    cout<<s+1<<"\n";
	}
}
