//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends

// arr[] = {5, 20, 3, 2, 5, 80
//   2 3 5 5 20 80 81
bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr +size);
   int d;
   int mid;
   int count=0;    
    for(int i=0;i<size-1;i++){
        
     
        mid=(i+size)/2;
     for(int j=i+1;j<size;j++){
        if((arr[j]-arr[i])==n){
            count++;
            // cout<<"hello "<<count<< "g "<<(arr[j]-arr[i])<< "t "<<arr[j]<<" "<<arr[i]<<endl;
        }
        // else if((arr[mid]-arr[i])<n){
        //    j=mid;
        //    if(((j+n)/2 )/2==0){
        //    mid=(j+n)/2;

        //    }
        //    else{
        //         mid=(j+n+1)/2;
        //    }
        //          cout<<"hello "<<count<< "g "<<(arr[j]-arr[i])<< "t "<<arr[j]<<" "<<arr[i]<<endl;
        // }
        else{
            // break;
        }
     }
    }
    
    if(count>=1){
        return true;
    }else{
        return false;
    }
}