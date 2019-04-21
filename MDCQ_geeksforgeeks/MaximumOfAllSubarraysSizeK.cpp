#include<bits/stdc++.h>
#include <deque>
using namespace std;

int main() {
    
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        int A[n];
        for(int i =0;i<n;i++)
            cin>>A[i];
        std::deque<int> Q(k);
        
        
        /* Process first k (or first window) elements of array */
        for(int i =0;i<k;++i){
            while(!Q.empty() && A[i] >= A[Q.back()])
                    Q.pop_back();
            Q.push_back(i);
        }
        
        
        // Process rest of the elements, i.e., from arr[k] to arr[n-1] 
        for(int i =k;i<n;i++){
            
            // The element at the front of the queue is the largest element of 
            // previous window, so print it 
            cout<<A[Q.front()]<<" ";
            
            // Remove the elements which are out of this window
            while(!Q.empty() && Q.front() <= i-k)
                Q.pop_front();
                
            // Remove all elements smaller than the currently 
            // being added element (remove useless elements) 
            while(!Q.empty() && A[i] >= A[Q.back()])
                Q.pop_back();
            // Add current element at the rear of Qi 
            Q.push_back(i);
        }
        // Print the maximum element of last window 
        cout<<A[Q.front()]<<endl;
    }
	//code
	return 0;
}


/*
2
9 3
1 2 3 1 4 5 2 3 6
10 4
8 5 10 7 9 4 15 12 90 13

-----
3 3 4 5 5 5 6
10 10 10 15 15 90 90
*/