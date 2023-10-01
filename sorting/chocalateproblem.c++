//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
     long long output ;
        int temp;
     for(int i=0;i<n;i++){
        temp=a[i];
        int j=i-1;
        while(j>=0){
      if(a[j]>a[i]){
         a[i]=a[j];
         a[j]=temp;
         i--;
      }
      else if(a[j]<a[i]){
        break;
      }
      else{

      }
      j--;
        }
     }
 
  output=a[m-1]-a[0];

    for(int i=0;i<n-m;i++){

         if((a[i+m-1]-a[i])<output){
            output=a[i+m-1]-a[i];
            
         }
    
    }
    return output;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends