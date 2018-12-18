#include <bits/stdc++.h>
using namespace std;
// Using skip list concept
int main() {
int n,c,min,max;
cin>>n>>c;
int range = (int)sqrt(n)+1;
int step = range;
int res =0;;
while(res==0)
{
cout<<"1 "<<step<<"\n";
cin>>res;
if(res==1){
cout << 2 << endl;
break;
}
step+=range;
if(step>n)
break;
}
if(step>n){
min=step-range+1;
max=n;
}
else{
min=step-range+1;
max=step;
}
for(int i=min;i<max;i++){
cout << 1 << " " << i << endl;
cin >> res;
if(res==1){
//cout << 2 << endl;
cout << 3 << " " << i << endl;
break;
}
else if(res==0 && i==max-1){
//cout << 2 << endl;
cout << 3 << " " << i+1 << endl;
}
}
}