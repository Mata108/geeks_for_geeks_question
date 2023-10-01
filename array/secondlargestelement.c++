//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    // sort(arr,arr+n);

	    int temp=0;
	    int temp2=0;
          for(int i=0;i<n;i++){
             if(temp<arr[i]){
                temp=arr[i];
             }
          }
          for(int i=0;i<n;i++){
             if(temp2<arr[i]){
                if(arr[i]<temp){

                temp2=arr[i];
                }
             }
          }
	      if(temp2==0){
              return -1;
          }else{
              
	    return temp2;
          }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends