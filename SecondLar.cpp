#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int temp,i,j;
	while(n--)
	{
	   int arr[3];
	   for(i = 0;i<3;i++)
	   cin>>arr[i];
	   //cout<<a[i];}
	   for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }
    
    cout<<arr[1]<<'\n';
	}
	   
}
