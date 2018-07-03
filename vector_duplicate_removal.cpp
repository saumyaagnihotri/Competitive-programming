#include<bits/stdc++.h>
using namespace std;

int main () {
   
  int input, i, n;
  std::vector<int> myvector;
  cin>>n;
  for(i =0; i< n;i++)
  {     cin>>input;                                         
        myvector.push_back(input);    }
    
    sort( myvector.begin(), myvector.end() );
    myvector.erase( unique( myvector.begin(), myvector.end() ), myvector.end() );

  
  for (auto i = myvector.begin(); i != myvector.end(); ++i)
    cout << *i << ' ';

  return 0;
}