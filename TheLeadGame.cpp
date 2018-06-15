    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int n;
      cin>>n;
      int a,b;
      int largea =0,largeb =0,ca=0,cb=0;
      while(n--)
      {
        
        
        cin>>a>>b;
        ca = ca +a;
        cb = cb +b;
        if(ca>=cb)
        {
        if(largea<(ca-cb))
        largea = (ca-cb);
        
        
        }
        else if(ca<cb)
        {
          if(largeb<(cb-ca))
          largeb = (cb-ca);
          
          
        }
        
      }
     if(largea>largeb)
        cout<<"1"<<" "<<largea;
        else
        cout<<"2"<<" "<<largeb; 
     
    } 

