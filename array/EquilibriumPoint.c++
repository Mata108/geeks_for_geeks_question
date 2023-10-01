//{ Driver Code Starts
#include <iostream>
#include<vector>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long sum=0;
        long long sum1=0;

        long long arr[n];
        for(int i=0;i<n;i++){
            sum=sum+a[i];
             arr[i]=sum;
            // sum1=sum1+a[n-1-i];
            // cout<<"sum:"<<sum<<" sum1:"<<sum1<<" t:"<<t<<endl;
            // if(sum==sum1){
            //     return t;
            // }
            // 8 16 19 25 33 35 42 44
            cout<<sum<<endl;
        }
        
        int t=0;
        for(int i=0;i<n;i++){
            t=n-i;
            cout<<"t:"<<t<<endl; 
            sum1=sum1+a[n-1-i];
            cout<<"v:"<<arr[n-2-i]<<" sum1:"<<sum1<<endl;
            if(arr[n-1-i]==sum1){
                cout<<"hello"<<endl;
                return t ;
            }
        }
            // return 100;
        
        // 7 4 3 5 7 9 10
        // 7 11 14 19 25 34 44
        // 10 19 
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends