#include<iostream>
#include<vector>
#include<string>
using namespace std;
  
  
int main(){
 int a[6]={5,3,6,4,2,1};
  
  for(int i=0;i<3;i++){
 
    // int temp=a[i];
    for( int j=0;j<6-i-1;j++){
          
        if(a[j]>a[j+1]){
          swap(a[j],a[j+1]);
          // cout<<a[j]<<" "<<a[j-1]<<endl;
        }
        else{
          cout<<"hello"<<endl;
            cout<<a[j]<<"j"<<endl;
        }
        // temp=a[j];
    }

  } 
  
  for(int i=0;i<6;i++){
    cout<<"element at"<<a[i]<<endl;
  }  
 return 0; 
 } 