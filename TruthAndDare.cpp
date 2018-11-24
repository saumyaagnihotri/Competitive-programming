#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
        int tr;
        cin>>tr;
        vector<int> vtr(tr);
        for(int i=0;i<tr; ++i)
        cin>>vtr[i];
        sort(vtr.begin(),vtr.end());
        vtr.erase( unique( vtr.begin(), vtr.end() ), vtr.end() );
        
        int dr;
        cin>>dr;
        vector<int> vdr(dr);
        for(int i=0;i<dr; ++i)
        cin>>vdr[i];
        sort(vdr.begin(),vdr.end());
        vdr.erase( unique( vdr.begin(), vdr.end() ), vdr.end() );

        int ts;
        cin>>ts;
        vector<int> vts(ts);
        for(int i=0;i<ts; ++i)
        cin>>vts[i];
        sort(vts.begin(),vts.end());
        vts.erase( unique( vts.begin(), vts.end() ), vts.end() );

        int ds;
        cin>>ds;
        vector<int> vds(ds);
        for(int i=0;i<ds; ++i)
        cin>>vds[i];
        sort(vds.begin(),vds.end());
        vds.erase( unique( vds.begin(), vds.end() ), vds.end() );
        
        vector<int> v1;
        vector<int> v2;
        
        
        
        set_difference(vts.begin(), vts.end(), vtr.begin(), vtr.end(),
        inserter(v1, v1.end()));
   
    
   
        set_difference(vds.begin(), vds.end(), vdr.begin(), vdr.end(),
        inserter(v2, v2.end()));
    

    
        if((v1.size()==0)&&(v2.size()==0))
        cout<<"yes\n";
        else
        cout<<"no\n";
   
    
    
    
	}
}