//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int>v;
          int t;
   int mid,l=0,r=n-1;
    for(int i=0;i<m;i++){
        l=0;
        r=n-1;
        t=v.size();
     while(l<=r){
        mid=(l+r)/2;
        cout<<"mid:"<<mid<<" l:"<<l<<" r:"<<r<<endl;
        if(arr1[mid]==arr2[i]){
            if(arr2[i]==arr2[i+1]){
                break;
            }else{
                cout<<"hello ji"<<endl;
           v.push_back(arr1[mid]);
            break;
            }
           
        }
        else if(arr1[mid]<arr2[i]){
         l=mid+1;
        }else{
          r=mid-1;
        }
     }

 } 

    
    // cout<<"t:"<<t<<endl;
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    return v;
    
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends