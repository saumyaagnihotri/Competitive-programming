#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<int, vector<char>> m;
	m[2] = {'a','b','c'};
	m[3] = {'d','e', 'f'};
	m[4] = {'g','h','i'};
	m[5] = {'j','k','l'};
	m[6] = {'m','n','o'};
	m[7] = {'p','q','r','s'};
	m[8] = {'t','u','v'};
	m[9] = {'w','x','y','z'};
	map<char, int> reversed;

    for (int i=2; i<=9; ++i)
    {
        int j =0;
        while(j!=m[i].size())
        {
             reversed[m[i][j]] = i; j++;
        }
    }
	
	
    map<string, ll>count_freq;
    ll t;
    cin>>t;
    while(t--)
    {
        string word;
	    cin>>word;
	    std::string text = "";
	    for(ll i=0; i<word.length(); i++)text += to_string(reversed[(char)word[i]]);
	    count_freq[text]++;
	   
    }
	
	map<ll, string> ans_rev;
	for(map<string, ll >::iterator i = count_freq.begin(); i != count_freq.end(); ++i)
    ans_rev[i->second] = i->first;
    
    vector<ll> v;
    for(map<ll, string >::iterator i = ans_rev.begin(); i != ans_rev.end(); ++i)

    v.push_back(i->first);
    cout<<ans_rev[v[v.size()-1]];
    
    
	
	
    
    
}