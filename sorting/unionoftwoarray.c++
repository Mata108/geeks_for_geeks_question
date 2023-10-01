#include<iostream>
#include<vector>
#include<string>
using namespace std;

void union_two_arry(int a[],int b[],int k,int l){
    int n;
      if(k>l){
        n=k;
      }
      else{
        n=l;
      }
    //   cout<<n<<endl;
      int i=0,j=0;
    //   while(i<k && j<l){
    //     if(a[i]>b[j] && a[i]!=b[j]){
    //         cout<<b[j]<<" l"<<j<<endl;
    //         j++;
    //     }
    //     else if(a[i]<b[j]  && a[i]!=b[j]){
    //         cout<<a[i]<<" k"<<i<<endl;
    //         i++;
    //     }
    //     else{
    //          if(k>l){
    //             cout<<a[i]<<"tt "<<i<<endl;

    //             i++;
    //             cout<<i<<endl;
    //          }else{
    //             cout<<b[i]<<"tt1 "<<j<<endl;
    //             j++;
    //          }
          
           

       
    //         }
         
    //     }
    while(i<k && j<l){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(j>0 && b[j]==b[j-1]){
            j++;
            continue;
        }
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j]){
            cout<<b[j]<<"  ";
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
 
        }
    }
    // while(i<k){
    //  if(i>0 && a[i]!=a[i-1]){
    //     cout<<a[i]<<" ";
    //     i++;
    //  }
    // }
    // while(j<l){
    //  if(i>0 && b[j]!=b[j-1]){
    //     cout<<b[j]<<" ";
    //  }
    //  j++;
    // }
      }
 


int main(){
  int a[]={1,2,5,8,9,10};
  int b[]={3,4,6,8};
  int n = sizeof(a)/sizeof(a[0]);
  int n1 = sizeof(b)/sizeof(b[0]);
  cout<<n<<"v"<<n1<<endl;
  union_two_arry(a,b,n,n1);
  
 return 0; 
 } 