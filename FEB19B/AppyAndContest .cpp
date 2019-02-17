#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b,k;
	    cin>>n>>a>>b>>k;
	    int ans = n/a + n/b - 2* ( n/ ((a*b)/(__gcd(a,b))) );
	    if(ans<k)
	    cout<<"Lose\n";
	    else cout<<"Win\n";
	}
}
