#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     ll t;
     cin>>t;
     while(t--)
     {
        // cout<<"\n\n";
       int n,m;
       cin>>n>>m;
        int fine =0, wk =0, inv =0; 
       for(int i =0; i<n; i++)
       {
          bool c = true; bool k =true;
           string res;
           cin>>res;
           string bits;
           cin>>bits;
           
           int invalid =0, weak =0;
           bool b[m];
           size_t size = 0;
           for (auto c : bits) {
           b[size++] = c == '1'; }
            if(res=="correct")
           { for(int i=0;i<m;i++)
            c = c&b[i];}
            else if(res=="wrong")
           { for(int i=0;i<m;i++)
             k = k&b[i];  }
             
             
            
            if(res=="correct"){
                if(c!=1)invalid = 1;  //cout<<"correct"<<' ';
            }
             else if(res=="wrong")
             {
                 if(k!=0)weak =1; //cout<<"wrong"<<' '<<weak<<' '<<"b[0]="<<b[0];
             }
          
       if(invalid==0&&weak==0)fine++;
       else if(invalid==1)inv++;
       else if(weak==1)wk++;
       }
       if(fine==n)cout<<"FINE\n";
       else if(fine+wk==n)cout<<"WEAK\n";
       else cout<<"INVALID\n";

          
       
     }
}
