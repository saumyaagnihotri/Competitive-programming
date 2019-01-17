#include <bits/stdc++.h>
#define int long long int 
using namespace std;
void swap(int *n, int *mm)
{
    int temp = *n;
    *n = *mm;
    *mm = temp;
}
int32_t main() {
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     
       int n,mm;
       cin>>n>>mm;
       map<int,pair<int,int>> m;
       vector<int> v1(n);
       vector<int> v2(mm);
       if(mm<=1000 && n<=1000)
       {
            vector<pair<int,pair<int,int>>> v;
            for(int i=0; i<n;++i)cin>>v1[i];
            for(int i=0; i<mm;++i)cin>>v2[i];
            set<pair<int,int>> sett;
            for(int i=0; i<n;++i)
            {
            for(int j=0; j<mm;++j)
            {
               int temp = v1[i] + v2[j];
               int old = m.size();
               m[temp] = make_pair(i,j);
               if(old!=m.size())
               cout<<i<<" "<<j<<"\n";
               if(m.size()>=(mm+n-1)) break;
               
           }
           }
       }
       else {
       vector<pair<int,pair<int,int>>> v;
       if(n>=mm)
       {
           for(int i=0; i<n;++i)cin>>v1[i];
           for(int i=0; i<mm;++i)cin>>v2[i];
       }
       else
       {
           swap(&n,&mm);
           for(int i=0; i<mm;++i)cin>>v1[i];
           for(int i=0; i<n;++i)cin>>v2[i];
           
       }
        auto minn = (int)(min_element(v2.begin(),v2.end()) - v2.begin());
        auto maxx = (int)(max_element(v2.begin(),v2.end()) - v2.begin());
        
       for(int i=0; i<n;++i)
       {
           
            int temp1 = v1[i] + v2[minn];
            int old1 = m.size();
            m[temp1] = make_pair(i,minn);
            if(old1!=m.size())
            cout<<i<<" "<<minn<<"\n";
            if(m.size()>=(mm+n-1)) break;
            int temp2 = v1[i] + v2[maxx];
            int old2 = m.size();
            m[temp2] = make_pair(i,maxx);
            if(old2!=m.size())
            cout<<i<<" "<<maxx<<"\n";
            if(m.size()>=(mm+n-1)) break;
       }
       }      
              
           
       
      

       
     
     
}
