//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
          sort(arr.begin(),arr.end());
        vector<int>v(2);
        int t=0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                v[0]=arr[i];
               
            }
        }
        t=0;
        for(int i=0;i<n+1;i++){
             cout<<arr[i]<<" t "<<i+1-t<<" i3:"<<i<<endl;
            if(arr[i]==i+1-t){
            if(arr[i]==arr[i+1]){
              cout<<arr[i]<<" t "<<i+1-t<<" i:"<<i<<endl;
               t++;
            }
               
            }else{
                cout<<arr[i]<<" t1 "<<i+1-t<<" i2:"<<i<<endl;
                v[1]=i+1-t;
                t--;
                break;
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