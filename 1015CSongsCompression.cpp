#include <bits/stdc++.h>
using namespace std;

int main() {
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     int n,m;
     cin>>n>>m;
     long long sum =0;
     vector<pair<int,int>> d(n);
     for(int i=0;i<n;++i)
     {
         int a,b;
         cin>>d[i].first>>d[i].second;
         sum = sum + d[i].first;
     }
    sort(d.begin(), d.end(), [&](pair<int, int> a, pair<int, int> b) { return a.first - a.second > b.first - b.second; });
     for(int i=0;i<n;++i)
     {
         if(sum<=m)
         {
             cout<<i;
             return 0;
         }
         sum -= d[i].first - d[i].second;
         
     }
     if(sum<=m)cout<<n;
     else
     cout << -1 << endl;
     
}
