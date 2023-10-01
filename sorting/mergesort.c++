//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l,int r)
    {
         
  
         // Your code here
         int m=(l+r)/2;
         int len1=m-l+1;
         int len2=r-m;
         int* first = new int[len1];
         int* second = new int[len2];
         int mainarrayindex=l;
          for(int i=0;i<len1;i++){
              first[i]=arr[mainarrayindex++];
          }
             mainarrayindex=m+1;
          for(int i=0;i<len2;i++){
              second[i]=arr[mainarrayindex++];
          }
          int index1=0;
          int index2=0;
          mainarrayindex=l;
          while(index1<len1 && index2<len2){
              if(first[index1]>second[index2]){
                  arr[mainarrayindex++]=second[index2++];
              }else{
                   arr[mainarrayindex++]=first[index1++];
              }
          }
          while(index1<len1 ){
              
                  arr[mainarrayindex++]=first[index1++];

    }
           while(index2<len2){
              
                  arr[mainarrayindex++]=second[index2++];

    }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r){
            return;
        
        }
        int m=(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
         
         merge(arr,l,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends