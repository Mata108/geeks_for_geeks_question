//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
  int temp=x;
        int temp2=arr[0]+brr[0];
        int count=0;
        vector<int>v(2);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 if(abs(arr[i]+brr[j]-x)<temp){
                        // cout<<"temp:"<<temp<<"arr[i]:"<<arr[i]<<" brr[j]:"<<brr[j]<<endl;
                        temp=abs(arr[i]+brr[j]-x);  
                        v[0]=arr[i];
                        v[1]=brr[j];
                        count++;
                    }
                    else{
                        if(count>=1){
                            continue;
                            
                        }
                       if(temp2>abs(arr[i]+brr[j]-x)){
                        temp2=abs(arr[i]+brr[j]-x);
                         v[0]=arr[i];
                        v[1]=brr[j];
                    }
                    else{
                        break;
                    }
                    }
                }
            }
        
        
        return v;
     
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends