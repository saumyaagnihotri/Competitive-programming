#include<bits/stdc++.h>
using namespace std;
int compWater(vector<int> v)
{
    int water = 0,n = v.size();
    int right[v.size()-1];
    int left[v.size()-1];
    int mx = 0;
    left[0] = v[0]; 
    for (int i = 1; i < n; i++) 
       left[i] = max(left[i-1], v[i]); 
  
    // Fill right array 
    right[n-1] = v[n-1]; 
    for (int i = n-2; i >= 0; i--) 
       right[i] = max(right[i+1], v[i]); 
    for (int i = 0; i < n; i++) 
       water += min(left[i],right[i]) - v[i]; 
  
    return water; 
} 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0; i<n; ++i)
	    cin>>v[i];
	    cout<<compWater(v)<<'\n';
	}
}
