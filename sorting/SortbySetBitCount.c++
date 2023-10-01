//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes 
        int d[n];
         for(int i=0;i<n;i++){
            d[i]=arr[i];
         }
         int count =0;
         int temp;
         int t=0;
         int k;

         for(int i=0;i<n;i++){
            count=0;
            temp=arr[i];
            while(temp>0){
              if((temp%2)==1){
                count++;
                
              }
              temp=temp/2;

              
            }
            if(count>t){
                t=count;
                k=i;
            }
         }

       for(int i=0;i<n;i++){
         
       }


       
          
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends