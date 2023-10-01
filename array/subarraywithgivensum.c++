// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
            //  long long  k;
           int left =0;
           vector<int>h;
         long long sum=0;

        
        // for(int i=0;i<n;i++){
        //     k=0;
        //   for(int j=i;(k<=s && j<n);j++){
        //       k=k+arr[j];
        //     //   cout<<arr[j-2];
        //       if(k==s){
               
        //          h.push_back(i+1);
        //           h.push_back(j+1);
        //          return h;
                 
        //       }
       
        for(int i=0;i<n;i++){
             
            sum=arr[i]+ sum;
            while(sum>s  && s!=0 ){

            
          cout<<arr[left]<<"left "<<i<<endl;
            sum=sum-arr[left];
            left++;
            }
            if(sum==s){
                  h.push_back(left+1);
             h.push_back(i+1);
                 return h;
            }  
                
             }
            
           
          h.push_back(-1);
        return  h;
          }
               
        
    
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}











    