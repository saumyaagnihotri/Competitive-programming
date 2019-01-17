#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    t++;
    while(t--)
    {
        
       std::string text;
       getline(cin,text);
 
      istringstream iss(text);
      vector<std::string> results(istream_iterator<std::string>{iss}, istream_iterator<std::string>());
      
      int f = 0;
      for(auto i: results)
      {
          if(i=="not")
          {
              f = 1;
              break;
          }
      }
      if(f==1)
      cout<<"Real Fancy\n";
      else if(text.length()!=0)
      cout<<"regularly fancy\n";
    }
    
}
