#include<iostream>
#include<vector>
#include<string>
using namespace std;
  
  
int main(){
string str="abbbbbbdccceaaa"; // n i  k  h i l
char t;              // 6 2  3  1 2 5  
for(int i=0;i<str.length();i++){
  
    for(int j=0;j<str.length()-i;j++){
        if(str[j]>str[j+1]){
              t=str[j];
            str[j]=str[j+1];
            str[j+1]=t;
            
        }

        // cout<<str[0]<<endl;
    }
}
cout<<endl;
for(int i=0;i<str.length()+1;i++){
    cout<<str[i]<<endl;
}

  
 return 0; 
 } 