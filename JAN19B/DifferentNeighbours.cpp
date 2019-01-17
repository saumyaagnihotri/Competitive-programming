#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
	    cin>>n>>m;
	    if(n==1 && m==1)
	    {
	        cout<<"1\n";
	        cout<<"1\n";
	    }
	    else if(n==1 && m==2)
	    {
	        cout<<"1\n";
	        cout<<"1 1\n";
	        
	    }
	    else if(n==2 && m ==1)
	    {
	        cout<<"1\n";
	        cout<<"1\n1\n";
	    }
	    else if( (n==1 && m>=2) || (n>=2 && m==1) )
	    {
	        cout<<"2\n";
	        if(n==1)
	        {
	            int i = 0;
	            while(i<=m)
	            {
	                
	                 cout<<"1 "; i++; if(i==m) break; 
	                 cout<<"1 "; i++; if(i==m) break; 
	                 cout<<"2 "; i++; if(i==m) break; 
	                 cout<<"2 "; i++; if(i==m) break; 
	            }
	            cout<<"\n";
	        }
	        else 
	        {
	            int i = 0;
	            while(i<=n)
	            {
	                 cout<<"1\n"; i++; if(i==n) break; 
	                 cout<<"1\n"; i++; if(i==n) break; 
	                 cout<<"2\n"; i++; if(i==n) break; 
	                 cout<<"2\n"; i++; if(i==n) break; 
	            }
	            
	        }
	    }
	    else if(n==2 && m==2)
	    {
	        cout<<"2\n";
	        cout<<"1 1\n";
	        cout<<"2 2\n";
	        
	    }
	    else if(n==2 && m>2)
	    {
	        int i = 0;
	        cout<<"3\n";
	        while(i<=m)
	        {
	            cout<<"1"; 
	            i++; 
	            if(i==m) break; else cout<<" ";
	            cout<<"1"; 
	            i++; 
	            if(i==m) break; else cout<<" ";
	            cout<<"2"; 
	            i++; 
	            if(i==m) break; else cout<<" ";
	            cout<<"2"; 
	            i++; 
	            if(i==m) break; else cout<<" ";
	            cout<<"3"; 
	            i++; 
	            if(i==m) break; else cout<<" ";
	            cout<<"3"; 
	            i++; 
	            if(i==m) break; else cout<<" ";
	        }
	        
	        cout<<"\n2 ";
	        i = 0;
	        while(i<=m-1)
	        {
	            cout<<"3"; 
	            i++; 
	            if(i==m-1) { cout<<"\n"; break;} else cout<<" ";
	            cout<<"3"; 
	            i++; 
	            if(i==m-1) { cout<<"\n"; break;} else cout<<" ";
	            cout<<"1"; 
	            i++; 
	            if(i==m-1) { cout<<"\n"; break;} else cout<<" ";
	            cout<<"1"; 
	            i++; 
	            if(i==m-1) { if(m%2==0) cout<<" 2\n"; else cout<<"\n";  break;} else cout<<" ";
	            cout<<"2"; 
	            i++; 
	            if(i==m-1) { cout<<"\n"; break;} else cout<<" ";
	            cout<<"2"; 
	            i++; 
	            if(i==m-1) { cout<<"\n"; break;} else cout<<" ";
	        }
	        
	        
	        
	        
	        
	    }
	    else if(n>2 && m==2)
	    {
	        int k = 0;
	        cout<<"3\n";
	        while(k<n)
	        {
	            if(k%3==1)
	            {
	                cout<<"1 1\n";
	                k++;
	                if(k==n) break;
	            }
	            else if(k%3==2)
	            {
	                cout<<"2 2\n";
	                k++;
	                if(k==n) break;
	            }
	            else if(k%3==0)
	            {
	                cout<<"3 3\n";
	                k++;
	                if(k==n) break;
	            }
	        }
	    }
	    else if(n>=3 && m>=3)
	    {
	        cout<<"4\n";
	        for(int i = 1; i<=n; ++i)
	        {
	           int n1 = 0;
	           if(i%4==1)
	           {
	               while(n1<m)
	               {
	                   int k;
	                   if(n1%2==0)
	                   k = n1/2;
	                   else k = n1/2 + 1;
	                   
	                   if(k%2==0)
	                   { cout<<"2"; n1++; if(n1==m) break; else cout<<" ";}
	                   else { cout<<"1"; n1++;  if(n1==m) break; else cout<<" ";}
	               }
	           }
	           else if(i%4==2)
	           {
	               while(n1<m)
	               {
	                   int k;
	                   if(n1%2==0)
	                   k = n1/2;
	                   else k = n1/2 + 1;
	                   
	                   if(k%2==0)
	                   { cout<<"4"; n1++; if(n1==m) break; else cout<<" ";}
	                   else { cout<<"3"; n1++; if(n1==m) break; else cout<<" ";}
	               }
	           }
	           else if(i%4==3)
	           {
	               while(n1<m)
	               {
	                   int k;
	                   if(n1%2==0)
	                   k = n1/2;
	                   else k = n1/2 + 1;
	                   
	                   if(k%2==0)
	                   { cout<<"1"; n1++; if(n1==m) break;  else cout<<" ";}
	                   else { cout<<"2"; n1++; if(n1==m) break; else cout<<" ";}
	               }
	           }
	           else if(i%4==0)
	           {
	               while(n1<m)
	               {
	                   int k;
	                   if(n1%2==0)
	                   k = n1/2;
	                   else k = n1/2 + 1;
	                   
	                   if(k%2==0)
	                   { cout<<"3"; n1++; if(n1==m) break;  else cout<<" "; }
	                   else { cout<<"4"; n1++; if(n1==m) break;  else cout<<" "; }
	               }
	           }
	           cout<<"\n";
	        }
	        
	    }
	
       //cout<<"\n"; 
    }
	
}
