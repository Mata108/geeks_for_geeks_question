#include<iostream>
using namespace std ;
  int binarysearch(int *arr,int n,int k){
        int low=0,high=n-1;
        int i;
    
while(low<=high){
    i=(low+high)/2;
   
 cout<<"i:"<<i<<" high:"<<high<<" low:"<<low<<endl;
 if(arr[i]==k){
    return i;
 }
 else if(arr[i]<k){
low=i+1;
 }
 else  {
       
    high=i-1;
    
 }

}
return -1;
  }
int main(){
int a[]={1,2,3,4,5,6,8};
int n=binarysearch(a,7,4);
cout<<n;
return 0;
}
