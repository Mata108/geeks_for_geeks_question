#include<iostream>
#include<vector>
#include<string>
using namespace std;
  
  
int main(){
    int n;
    cin>>n;
    int count=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
         if(arr[i]!=0){
            swap(arr[i],arr[count]) ;
             count++;

         }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
  
  
 return 0; 
 } 