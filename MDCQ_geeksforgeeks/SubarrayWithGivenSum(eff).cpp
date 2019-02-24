/*
https://www.geeksforgeeks.org/find-subarray-with-given-sum/ 

Method 2 (Efficient)
Initialize a variable curr_sum as first element. curr_sum indicates the sum of current subarray. Start from the second element and add all elements one by one to the curr_sum. If curr_sum becomes equal to sum, then print the solution. If curr_sum exceeds the sum, then remove trailing elements while curr_sum is greater than sum.
Following is the implementation of the above approach.

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, s, f =0;
        cin>>n>>s;
        vector<int> v(n);
        for(int i=0; i<n;++i) cin>>v[i];
        int start = 0, sum = v[0];
        for(int i=1;i<=n;++i)
        {
            while(sum>s && start<i-1)
            {
                sum-=v[start];
                start++;
                
            }
            
            if(sum==s)
            {
                f = 1;
                cout<<start+1<<" "<<i<<"\n";
                break;
            }
            
            if(i<n) sum+=v[i];
            
        }
        if(f==0) cout<<"-1\n";
    }
}