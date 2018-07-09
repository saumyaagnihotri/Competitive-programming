#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v;
  int n;
  bool input;
  cin>>n;
  for(int i =0; i<n; i++)
  {
    cin>>input;
    if(input == 0)
    v.push_back(input);
  }

  int s = n - v.size();
  while(s)
  {
    v.push_back(1);
    s--;
  }
  for(int i =0;i<n; i++)
  cout<<v[i]<<' ';



}