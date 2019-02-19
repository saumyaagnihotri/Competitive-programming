#include <bits/stdc++.h>
#define int long long int
using namespace std;
int countSubstring(const std::string& str, const std::string& sub)
{
    if (sub.length() == 0) return 0;
    int count = 0;
    for (size_t offset = str.find(sub); offset != std::string::npos;
	 offset = str.find(sub, offset + sub.length()))
    {
        ++count;
    }
    return count;
}
 
int32_t main() {
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
        int n; string s;
        cin>>n;
        cin>>s;
        string s_ans = "";
        int lar = 0;
        for(int i=s.length()/2; i>=0; --i)
        {
            string s1 = s.substr(0, i);
            if(lar>=countSubstring(s,s1)) break;
            else 
            {
                s_ans = s1;
                lar = countSubstring(s,s1);
            }
            
        }
        if(lar==1)
        cout<<s<<"\n";
        else
        cout<<s_ans<<"\n";
        
     }
}
