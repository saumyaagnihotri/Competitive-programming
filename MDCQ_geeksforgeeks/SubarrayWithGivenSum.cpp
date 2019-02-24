/*
https://www.geeksforgeeks.org/find-subarray-with-given-sum/ 

Method 1 (Simple) 
A simple solution is to consider all subarrays one by one and check the sum of every subarray. Following program implements the simple solution. We run two loops: the outer loop picks a starting point i and the inner loop tries all subarrays starting from i.
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
        int n, s , a, b ,sum =0,k=0,f=0;
        cin>>n>>s;
        vector<int> v(n);
        for(int i=0; i<n;++i) cin>>v[i];
        for(int i=0;i<n;++i)
        {
            a = i+1, sum = 0, k = i;
            while(sum!=s && k<n)
            {
                sum+=v[k];
                if(sum>s) {  k = -1; break; } 
                k++;
            }
            if(k==-1) continue;
            if(sum==s)
            {
                f  = 1; 
                b = k;
                break;
            }
        }
        if(f==1)
        cout<<a<<" "<<b<<"\n";
        else cout<<"-1\n";
    }
}