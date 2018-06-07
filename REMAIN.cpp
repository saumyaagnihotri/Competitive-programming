#include <iostream>

using namespace std;

int main() {
    int n;
    long long M, N;
    cin>>n;
    while(n--)
    {
        
        cin>>N>>M;
        if(M==0)
        continue;
        else
        {
        if((N%M)%2==0)
        cout<<"EVEN\n";
        else
        cout<<"ODD\n";
        }
    }
}
