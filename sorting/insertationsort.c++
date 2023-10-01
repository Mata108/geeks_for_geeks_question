#include<iostream>
#include<vector>
#include<string>
using namespace std;
  
  
int main(){
 int a[5]={5,6,4,2,1};
  
  for(int i=0;i<5;i++){
    int j=i;
    int temp=a[i];
    for(;j>0;j--){
        if(temp<a[j-1]){
          
          swap(a[j],a[j-1]);
          // cout<<a[j]<<" "<<a[j-1]<<endl;
        }
        else{
          cout<<"hello"<<endl;
            break;
        }
    }

  } 
  
  for(int i=0;i<5;i++){
    cout<<"element at"<<a[i]<<endl;
  }  
 return 0; 
 } 