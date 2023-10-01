// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution{
//   public:
//     vector<int> duplicates(int arr[], int n) {
//         // code here
//         // 2 0 3 3 1
//         vector<int>v;
//         int count=0;
//         sort(arr,arr+n);
//         for(int i=0;i<n;i++){
//             count=0;
//             if(arr[i]!=arr[i+1]){
//                 cout<<i<<" : i"<<endl;
//             for(int j=0;j<n;j++){
//                 if(arr[i]==arr[j]){
//                     count++;
//                 }
//             }
//             if(count>1){
//              v.push_back(arr[i]);
//             }
//             }
           
//         }

//         if(v.size()>0){
//             return v;
//         }else{
//             v.push_back(-1);
//             return v;
//         }
//     }
// };


// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin >> t;
//     while (t-- > 0) {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++) cin >> a[i];
//         Solution obj;
//         vector<int> ans = obj.duplicates(a, n);
//         for (int i : ans) cout << i << ' ';
//         cout << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends














//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
         vector<int>v;
        int count=0;
        sort(arr,arr+n);
          int i=0;
          do{

       count=0;
            if(arr[i]==arr[i+1] && arr[i]!=arr[i-1] ){
                // cout<<i<<" : i"<<endl;
                count++; 
                if(arr[i]==arr[i+2]){
                    count++;
                }}
                
             if(count>1){
             v.push_back(arr[i]);
            }
            i++;
    }while(i<n);
     if(v.size()>0){
            return v;
        }else{
            v.push_back(-1);
            return v;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends