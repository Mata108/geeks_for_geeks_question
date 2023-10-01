//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    sort(a1,a1+n);
    sort(a2,a2+m);
   int count=0;
   int mid,l=0,r=n-1;
    for(int i=0;i<m;i++){
        l=i;
        r=n-1;
       while(l<=r){
    mid=(l+r)/2;
   
 cout<<"mid:"<<mid<<" high:"<<r<<" low:"<<l<<" i:"<<i<<endl;
 if(a1[mid]==a2[i]){
    count++;
    break;
 }
 else if(a1[mid]<a2[i]){
    l=mid+1;
 }
 else  {
       
    r=mid-1;
    
 }

}

    }
    cout<<"coutn::"<<count<<endl;
   if(count>=m){
    return "Yes";
}else{
    return "No";
}
}
// 11  3  7  1  7
// 11  7  1  13  21  3  7  3