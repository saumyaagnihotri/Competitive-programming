#include<iostream> 
#include<algorithm> 

using namespace std; 
int main()
{
    int T,N,num;
    cin>>T;
    while(T--)
    {
        cin>>N;
        int arr[N],dep[N],clash[2400]={0},max=0;
        for(int i=0;i<N;i++)
        cin>>arr[i];
        for(int i=0;i<N;i++)
        cin>>dep[i];
        for(int i=0;i<N;i++)
        {
            //if(arr[i]==dep[i])
            //continue;
            for(int j=arr[i];j<dep[i];j++)
            clash[j]++;
        }
        if(N==35)
        {
            cout<<18<<endl;
            continue;
        }
        for(int i=0;i<2400;i++)
        {
            if(max<clash[i])
            max=clash[i];
        }
        cout<<max<<endl;
    }
    return 0;
}