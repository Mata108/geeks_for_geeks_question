//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        int count = 1;
        int t = 0;
        int r;
        // Your code here
        for (int i = 0; i < n; i++)
        { 
           if(dep[i]>arr[i+1]){
            // if(t>1){
            //     count++;
            // }
      count++;
    //   cout<<"count:  "<<count<<" t: "<<t<<endl;
           }
           else{
                //  cout<<"count1:  "<<count<<" t: "<<t<<endl;
           
            if(count>t){
                t=count;
           

            }
            else{
                count--;
            }
           }
        

        }
        // cout<<"co"<<t<<endl;
        return t;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
  
    int n=8;
    int arr[8]={900,940,950,1100,1500,1800,1950,2010};
    int dep[8]={910,1200,1120,1130,1900,2000,2050,2040};
//   int  arr[] = {900, 940, 950, 1100, 1500, 1800};
//   int  dep[] = {910, 1200, 1120, 1130, 1900, 2000};
        Solution ob;
        cout << ob.findPlatform(arr, dep, n) << endl;
    // }
    return 0;
}
// } Driver Code Ends

  // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     int arr[n];
    //     int dep[n];
    //     for (int i = 0; i < n; i++)
    //         cin >> arr[i];
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> dep[j];
    //     }