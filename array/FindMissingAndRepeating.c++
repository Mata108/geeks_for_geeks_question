//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
          vector<int>v(2);
       sort(arr.begin(),arr.end());
    //    for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    //    }
       int t=0;
          for(int i=1;i<n+1;i++){
              if(arr[i-1-t]==i){
                ;
              cout<<"I:"<<i<<endl;
              }else{
                v[1]=i;
                 cout<<"i:"<<i<<"v:"<<v[1]<<endl;

                t++;
              }
            
              if(arr[i]==arr[i-1]){
                v[0]=arr[i];
                cout<<"o:"<<arr[i-1]<<"v:"<<v[0]<<endl;
                t--;
              }
          }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends