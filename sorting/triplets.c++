//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// 1 5 3 2
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
         //    2 5 8 10 11 12 14
       sort(arr, arr + n);
        int sum;
        int count=0;
        int mid;
    //  11 43 54 56 99 110 232
        for(int i=0;i<n-2;i++){
            // 1 2  5  7 8 9  12 
            sum=0;
       for(int j=i+1;j<n-1;j++){
        sum=arr[i]+arr[j];
        mid=(j+n)/2;
       for(int k=j+1;k<n;k++){
        if(sum==arr[k]){
          count++;
          break;
        }
        else if(sum<arr[k]){
            break;
        }
        else{
            if(sum>arr[mid]){
             k=mid;
             mid=(k+n)/2;
            }
          
        }
       }
       }
            
            

            }
            
   
        
        return count;
	}
};

//{ Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends

// for(int j=i+1;j<n;){
             
//    sum=arr[i]+arr[j];
//                    if(k>=n){
//                             j++;
                           
//                             k=0;
//                             cout<<arr[k]<<"k"<<k<<"u"<<j<<endl;
//                         }
                        
//                   if(sum==arr[k]){
//                 cout<<sum<<" "<<arr[k]<<"v "<<j<<" "<<arr[j]<<endl;
//                         count++;
//                         k=0;
//                         j++;
//                         // j++;
//                     //     if(j==n-2){
//                     //    cout<<"hello"<<k<<" "<<i<<" "<<j<<endl;
//                     //      }else{
//                     //      k=0;
//                     //     j++;
//                     //      }
//                     }
//                     k++;
                  
                   

//             }
// role: {
//       type: String,
//       default: "student",
//     },