//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        cout<<nums.size()<<"w"<<endl;
        int count=0;
        vector<int>v;
        vector<int>t;
        for(int i=0;i<nums.size();i++){
            count=0;
            cout<<nums[i]<<"i"<<endl;
            for(int j=i;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
                i=i+count-1;
            }
            cout<<count<<"cloun"<<endl;
            v.push_back(count);
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends