//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        // Your code here
        int l=a.length();
        int count=0;
        if((a.length())!=(b.length())){
            return false;
        }
        else{
            // geeksforgeeks forgeeksgeeks
            // abada      bada
            //  s  w  a  l   r  l lsrasw
            // 19 23  1  12 18  12
            //    1 12 12 18 19 23 
            sort(a,a+l);
            sort(b,b+l);
            for(int i=0;i<l;i++){
                 if(a[i]==b[j]){
               count++;
    
                }
            }
        }
        if(count==l){
            return true;
        }else{
            return false;
        }
    }

};

//{ Driver Code Starts.

int main() {
 
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends