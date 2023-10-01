#include<iostream>
#include<vector>
#include<string>
using namespace std;
  
int main(){
    int n;
    
 int temp;
    cin>>n;
    int k=n-1;
  int arr[n];

  for(int i=0;i<n;i++){
        cin>>arr[i];
  }
  for(int i=0;i<n;i++){
            // cout<<arr[i]<<"k "<<arr[i+1]<<" l"<<arr[i+2]<<endl;
    if(arr[i]==0){
      for(int j=i+1;j<n;j++){
            if(arr[j]!=0){
                  cout<<i<<" "<< j<<endl;
                 temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
                  //  swap(arr[i],arr[j]);
                  // cout<<arr[i]<<"  "<<arr[j]<<endl
                  break;
            }
      }
      }
    }
  

   cout<<"start";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
  }
  
 return 0; 
 } 