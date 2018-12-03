#include <bits/stdc++.h>
using namespace std;
int const N = 100001;

int pf[N];

void init_pf() {
	for(int i = 2; i < N; i++) {
		if(pf[i] == 0) {
			for(int j = i; j < N; j += i) {
				pf[j]++;
			}
		}
	}
}

int main() {
     init_pf();
	 ios_base::sync_with_stdio (false); 
	 cin.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
        int v[100001] {};
        int n;
        cin>>n;
        for(int i=0; i<n;++i)
        {
            int k;
            cin>>k;
            v[k]++;
        }
        int ans = 0;
        for(int i=2;i<100001;i++)
        {
            int s = 0;
            for(int j =i; j<100001;j=j+i)
            {
                s+=v[j];
            }
            int c = pf[i];
            ans = max(ans,s*c);
        }
       cout<<ans<<'\n'; 
     }
}
