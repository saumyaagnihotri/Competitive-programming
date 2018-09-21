#include <bits/stdc++.h>
using namespace std;
/*digit swap */
int main() {
	long long n; cin>>n;

	long long d = trunc(log10(n)+1);    //number of digits
	long long s=0;
	for(int i=2; i<d;++i)
	{
	    
	    s = s + (( n/ long(pow(10,d-i)) ) %10)*(long(pow(10,d-i) ));    
	}

	s = s + (n %10)*(long(pow(10,d-1) )) + ( n/ long(pow(10,d-1)) ) %10;
		cout<<s;
}