//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
                 
       int  temp=0,t=0,z=0,x=0;
              float y=(size/2);
        int  count=0;
        for(int i=0;i<size-(size/2)+1;i++){
            count=0;
            x=0;
            if(size%2==0){

            z=(size+i)/2;
            }else{
                z=(size+i+1)/2;
            }
            
              for(int j=i;j<z;j++){
                   if(count>y){
                        break;
                    }
                if(a[i]==a[size-1-x]){
                    count++;
                }
                if(a[i]==a[j]){
                    count++;
                }
               x++;
              }
      
           if(count>y){
            t=count;
            temp=a[i];
            break;
            

           }
        }
        
        
        if(t>y){
        return temp;
        }else{
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends