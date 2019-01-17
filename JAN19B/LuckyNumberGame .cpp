#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
        int n, b, a;
        cin>>n>>b>>a;
            int count_common =0, count_bob =0, count_alice =0;
            for(int i=0; i<n; ++i)
            {
            int input;
            cin>>input;
            if((input%b==0)&&(input%a==0))
            count_common++;
            else if(input%b==0)
            count_bob++;
            else if(input%a==0)
            count_alice++;
            }
            if(count_alice==count_bob && count_common!=0)
            cout<<"BOB\n";
            else if(count_alice==count_bob && count_common==0)
            cout<<"ALICE\n";
            else if(count_alice<count_bob)
            cout<<"BOB\n";
            else if(count_alice>count_bob)
            cout<<"ALICE\n";
        
     }
}
