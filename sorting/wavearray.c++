//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// #include <algorithm>


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        // 1 13 25 36 47 50 60 65
        // 13 1 36 25 50 47 65 60
        int temp;
        for(int i=0;i<n-1;i=i+2){
            temp=arr[i];
          arr[i]=arr[i+1];
          arr[i+1]=temp;
        }

        
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        sort(a.begin(),a.end());
        Solution ob;
        ob.convertToWave(n, a);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}
// } Driver Code Ends