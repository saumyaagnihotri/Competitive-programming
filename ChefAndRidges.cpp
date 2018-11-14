#include<bits/stdc++.h>
#define ll long long
using namespace std;
int folder(int n)
{
    if(n==1 || n==2)
    return 1;
    else 
    return 2*folder(n-2) + folder(n-1);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        cout<<folder(n)<<" "<<long(pow(2,n))<<" ";
        
        
	}
}