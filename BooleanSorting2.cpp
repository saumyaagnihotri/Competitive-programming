#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v;
  int n, i, s= 0;
  bool input;
  cin>>n;
  for(i =0; i<n; i++){  cin>>input; s = s + input;  }
  for(i =0;i< n -s; i++) v.push_back(0);
  for(int i =0;i< s; i++)v.push_back(1);
  for(i = 0; i< n; i++)cout<<v[i]<<' ';

 


}