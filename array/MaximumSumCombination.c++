// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution {
//   public:
//     vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
//         // code here
// //         N = 2
// // K = 2
// // A [ ] = {3, 2}
// // B [ ] = {1, 4}
// // Output: {7, 6}
// // N = 4
// // K = 3
// // A [ ] = {1, 4, 2, 3}
// // B [ ] = {2, 5, 1, 6}
// // Output: {10, 9, 9}
// int sum=0;
// int sum2=0;
// vector<int>v;
// for(int i=0;i<K;i++){
//     for(int j=0;j<K;j++){
//       sum=A[N-K+i]+B[N-K+j];
//          v.push_back(sum);
    
//     }
// }
// for(int i=0;i<v.size();i++){
//     cout<<"v"<<i<<":"<<v[i]<<endl;
// }
// sort(v.begin(),v.end());
// int x=v.size();
// vector<int>t;
// for(int i=0;i<K;i++){
//     t.push_back(v[x-1-i]);
// }



// return t;
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N, K;
//         cin >> N >> K;

//         vector<int> A(N), B(N);
//         for (int i = 0; i < N; i++) {
//             cin >> A[i];
//         }
//         for (int i = 0; i < N; i++) {
//             cin >> B[i];
//         }
//         Solution obj;
//         vector<int> ans = obj.maxCombinations(N, K, A, B);
//         for (auto &it : ans) cout << it << ' ';
//         cout << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
//           for(int i=0;i<K;i++){
 
//     // int temp=a[i];
//     for( int j=0;j<N-i-1;j++){
          
//         if(A[j]>A[j+1]){
//           swap(A[j],A[j+1]);
//           // cout<<a[j]<<" "<<a[j-1]<<endl;
//         }
//         else{
        
//           ;
//         }
        
//          if(B[j]>B[j+1]){
//           swap(B[j],B[j+1]);
//           // cout<<a[j]<<" "<<a[j-1]<<endl;
//         }
//         else{
        
//           ;
//         }
//         // temp=a[j];
//     }

//   } 
       
sort(A.begin()+N-K-1,A.end());
sort(B.begin()+N-K-1,B.end());
int sum=0;
for(int i=0;i<N;i++){
    cout<<"A"<<i<<":"<<A[i]<<endl;
    cout<<"B"<<i<<":"<<B[i]<<endl;
}
vector<int>v;
for(int i=0;i<K;i++){
    for(int j=0;j<K;j++){
      sum=A[N-K+i]+B[N-K+j];
         v.push_back(sum);
    
    }
}

sort(v.begin(),v.end());
int x=v.size();
vector<int>t;
for(int i=0;i<K;i++){
    t.push_back(v[x-1-i]);
}



return t;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends