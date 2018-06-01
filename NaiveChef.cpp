#include <iostream>
 
using namespace std;
 
int main() {
    int T;
    cin>>T;
    int N;
    float s,s1;
    int A,B, D[10000];
    
    float probA,probB ;
    while(T--)
    {
        s =0.0;
        s1 = 0.0;
        cin>>N>>A>>B;
        
        
        for(int i =1;i<=N; i++)
            cin>>D[i];
           
        
        for(int i =1;i<=N; i++)
            if(D[i]==A)
                s = s+1;
            
        
        probA = s/N;
        
       
        
        
        
        
        for(int i =1;i<=N; i++)
        if(D[i]==B)
            s1 = s1+1;
       
        
        probB = s1/N;
       
        
        printf("%f\n",(probA*probB));
        
        
    }
}