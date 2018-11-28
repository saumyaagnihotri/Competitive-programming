#include <bits/stdc++.h>
using namespace std;
void do_it(vector<int> &v2,int k)
{
    for(int i=0; i<=100-k; i=i+7)
    v2.push_back(i+k);
}
int main() {
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         string a,b;
         int s,e;
         int aa,bb;
         cin>>a>>b>>s>>e;
         if(a=="saturday")aa=1;
         if(a=="sunday")aa=2;
         if(a=="monday")aa=3;
         if(a=="tuesday")aa=4;
         if(a=="wednesday")aa=5;
         if(a=="thursday")aa=6;
         if(a=="friday")aa=7;

         
         if(b=="saturday")bb=1;
         if(b=="sunday")bb=2;
         if(b=="monday")bb=3;
         if(b=="tuesday")bb=4;
         if(b=="wednesday")bb=5;
         if(b=="thursday")bb=6;
         if(b=="friday")bb=7;
         
        
        
         
         vector<int> v1;
         for(int i=s;i<=e;++i)
         v1.push_back(i); 
         
         vector<int> v3;
         vector<int> v2;

        
         
             
             int k = bb-aa+1;
             do_it(v2,k);
             set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(v3));
             if(v3.size()>1)
             cout<<"many\n";
             else if(v3.size()==0)
             cout<<"impossible\n";
             else cout<<v3[0]<<"\n";
             
       
         
         
         
         
         
     }
}
