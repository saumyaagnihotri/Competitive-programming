#include<bits/stdc++.h>
using namespace std;
long computeXOR(const int n) 
{ 
    // Modulus operator are expensive on most of the  
    // computers. n & 3 will be equivalent to n % 4.    
  
    switch(n & 3) // n % 4  
    { 
    case 0: return n;     // if n is multiple of 4 
    case 1: return 1;     // If n % 4 gives remainder 1   
    case 2: return n + 1; // If n % 4 gives remainder 2     
    case 3: return 0;     // If n % 4 gives remainder 3   
    } 
    return -1;
} 
int main() {
	int t; cin>>t;
	while(t--)
	{
	    int n,xorr;
	    cin>>n;
	    vector<int> v2(n-1);
	    for(int i=1; i<n; ++i) 
	    {
	        cin>>v2[i-1];
	        if(i==1) { xorr = v2[i-1]; }
	        else xorr^=v2[i-1];
	    }
	    cout<<(computeXOR(n)^xorr)<<"\n";
	    
	    
	}
}
