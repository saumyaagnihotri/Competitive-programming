/*
https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

Simple idea of the Kadane’s algorithm is to look for all positive contiguous segments of the array (max_ending_here is used for this). 
And keep track of maximum sum contiguous segment among all positive segments (max_so_far is used for this). 
Each time we get a positive sum compare it with max_so_far and update max_so_far if it is greater than max_so_far.

*/
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n;++i) { cin>>v[i]; if(v[i]>0) k = 1; }
        if(k==0)
        {
            cout<<*max_element(v.begin(),v.end())<<"\n";
            continue;
        }
        int end = 0, max = 0;
        for(int i=0;i<n;++i)
        {
            end+=v[i];
            if(end<0) end  = 0;
            if(max<end) max = end;
        }
        cout<<max<<"\n";
    }
}