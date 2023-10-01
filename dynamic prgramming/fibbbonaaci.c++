//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
    //    unsigned long int t1 =0;
    //     unsigned long int t2=1;
    //    unsigned long  int sum=0;
    //     for(int i=1;i<n;i++){
    //     sum=t1+t2;
    //     t1=t2;
    //     t2=sum;
    //     cout<<"t1:"<<t1<<" t2:"<<t2<<" sum:"<<sum<<endl;
    //     }
    //     // if(n==1){
    //     //     return 0;  
    //     // }
    //     // else if(n==2){
    //     //     return 1;
    //     // }
    //     // else{
    //     // }
    //         return t2;
    //  if(n==1){
    //     return 1;
    //  }
    //  else{
     
    //  }
       if(n<=1){
            return n;
        }
    return nthFibonacci(n-2)+nthFibonacci(n-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends