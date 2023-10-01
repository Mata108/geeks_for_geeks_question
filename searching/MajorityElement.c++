//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
                 
       int  temp=0,t=0,z=0,x=0;
              float y=(size/2);
        int  count=0;
    //  3 1 3 3 2 x=1
            for(int i=0;i<size;i++){
                if(a[x]==a[i]){
                    count++;
                }else{
                    count--;
                }
                if(count<=0){
                    x=i;
                    i=i-1;
                    
                  
                }
            }
        if(count>1){
        return a[x];
        }else{
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends