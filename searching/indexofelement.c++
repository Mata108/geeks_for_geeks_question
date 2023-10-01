#include<iostream>
#include<vector>
using namespace std;
 int indexof(int a[],int d){
   for(int i=0;i<5;i++){
    if(a[i]==d){
        return i;
    }
   }
 }
int main(){
int a[]={1,2,3,4,5};
    int d;
    cin>>d;

 cout<<indexof(a,d)<<endl;
  return 0;    
} 
