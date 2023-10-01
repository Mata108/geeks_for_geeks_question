//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        // 3 2 1 4 
        // 1 2 3 4 
        vector<int>a;
        sort(candies,candies +N);
        int min=0;
        int max=0;
        
        int t=(N/k)
        for(int i=0;i<(N-K);i++){
          min=min+candies[i];
          max=max +candies[N-1-i];
        }
        // a.at(0)=min;
        // a.at(1)=max;
        // a[0]=min;
        // a[1]=max;
        a.push_back(min);
        a.push_back(max);
        return a;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends