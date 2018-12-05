#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> maxx,minss;
    int hash[100003] = {0};
    
    int q,count =0;
    cin>>q;
   
    while(q--)
    {
        string x;
        while(!minss.empty() and hash[-minss.top()]<=0){
            minss.pop();
            
        }
        while(!maxx.empty() and hash[maxx.top()]<=0){
            maxx.pop();
        }
        cin>>x;
		if(x=="Push"){
			int y;
			cin>>y;
		
			hash[y]++;
			maxx.push(y);
			minss.push(-y);
			count++;
		}
		else if(x=="Diff"){
			if(count==0){
				cout<<-1<<endl;
				continue;
			}
			else{
				int s,l;
				s=-minss.top();
				l=maxx.top();
				if(s!=l){
					hash[s]--;
					count--;
				}
				hash[l]--;
				count--;
				minss.pop();
				maxx.pop();
				cout<<l-s<<endl;
			}
		}
		else if(x=="CountHigh"){
			if(count==0){
				cout<<-1<<endl;
				continue;
			}
			cout<<hash[maxx.top()]<<endl;
		}
		else if(x=="CountLow"){
			if(count==0){
				cout<<-1<<endl;
				continue;
			}
			cout<<hash[-minss.top()]<<endl;
		}
	
	}   
    
}