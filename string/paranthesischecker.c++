//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    // [ ( ){(  )}]
    bool ispar(string x)
    {
        // Your code here
        vector<char>v;
        int t;
        int q=0;
        for(int i=0;i<x.length();i++){
            t=v.size();
            cout<<t<< "t"<<i<<" i"<<endl;
        if('['==x[i]){
            q++;
            v.push_back('[');
        }
        else if('{'==x[i]){
                    q++; 
            v.push_back('{');
        }
        else if('('==x[i]){
        q++; 
            v.push_back('(');
        }
        else if(']'==x[i]){
            if(t>0){
                q--;
         if(v[t-1]=='['){

            v.pop_back();
           }
            }else{
                return false;
            }
          
        }
        else if('}'==x[i]){
            if(t>0){
          q--;
           if(v[t-1]=='{'){

            v.pop_back();
           } 
            }else{
                return false;
            }
        }
        else if(')'==x[i]){
            if(t>0){
                q--;
         if(v[t-1]=='('){

            v.pop_back();
           }
            }else{
                return false;
            }
          
        }else{
           
        }

        }
    if(v.size()==q){
        if(v.size()==0){

        return true;
        }else{
        return false;
    }
    }else{
        return false;
    }

    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends