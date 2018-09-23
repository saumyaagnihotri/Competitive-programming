#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, p, root, ans=INT_MIN;
vector < vector < int > > adj; 
vector < int > value;
 
void dfs(int node, int maxval)
{
	maxval=max(maxval, value[node]);
	ans=max(ans, maxval-value[node]);
	for (int i=0; i<adj[node].size(); i++) 
	dfs(adj[node][i], maxval);
}
 
signed main()
{
	
	cin >> n;
	adj.resize(n+1);
	value.resize(n+1);
	for (int i=1; i<=n; i++) cin >> value[i];
	for (int i=1; i<=n; i++)
	{
		cin >> p;
		if (p==-1) root=i;
		else adj[p].push_back(i);
	}
	dfs(root, value[root]);
	cout << ans;
}