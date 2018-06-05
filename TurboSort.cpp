#include <iostream>

using namespace std;

int main() {
    int a[50], n, temp;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=1;i<n;i++)
    for(int j=0;j<(n-i);j++)
    {
        if(a[j]>a[j+1])
        {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<"\n";
    
}
