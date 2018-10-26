#include <bits/stdc++.h>
#define ll long long
using namespace std;

int checker(int xx,int yy, map<int,int> x,map<int,int> y)
{
        int sum =0;
        if(  ((x[xx+2]==1) && (y[yy-1]==1))|| ((x[xx+2]==1) && (y[yy-1]==1)) )
        sum++;
        if(  ((x[xx-2]==1) && (y[yy+1]==1))|| ((x[xx-2]==1) && (y[yy-1]==1)) )
        sum++;
        if(  ((x[xx+1]==1) && (y[yy+2]==1))|| ((x[xx-1]==1) && (y[yy+2]==1)) )
        sum++;
        if(  ((x[xx-1]==1) && (y[yy-2]==1))|| ((x[xx+1]==1) && (y[yy-2]==1)) )
        sum++;
        return sum;
}
int main() {
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
        ll n;
        cin>>n;
        map<int,int> x;
        map<int,int> y;
        for(int i=0; i<n; ++i)
        {
            int a,b;
            cin>>a>>b;
            x[a] = 1;
            y[b] = 1;
        }
        int xx,yy;
        cin>>xx>>yy;
        if(checker(xx,yy,x,y)>=1)
        {
            int ss = checker(xx-1,yy+1,x,y)+checker(xx-1,yy,x,y)+checker(xx-1,yy-1,x,y)
            +checker(xx,yy+1,x,y)+checker(xx,yy-1,x,y)+checker(xx+1,yy+1,x,y)+checker(xx+1,yy,x,y)+checker(xx+1,yy-1,x,y);
            if(ss>=8)cout<<"YES\n";
            else cout<<"NO\n";
        }
        else
        cout<<"NO\n";
     }
}
