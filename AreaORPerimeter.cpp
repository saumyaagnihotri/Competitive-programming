#include <iostream>
 
using namespace std;
 
int main() {
	long long L,B;
	cin>>L>>B;
	if((2*(L+B))>(L*B))
	{
	    cout<<"Peri"<<'\n';
	    cout<<(2*(L+B));    }
	else
    {   cout<<"Area"<<'\n';
	    cout<<(L*B);
    }
}
 