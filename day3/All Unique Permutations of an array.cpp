//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());

        ans.push_back(arr);

        while(next_permutation(arr.begin(),arr.end())) {
            ans.push_back(arr);
        }
        return ans;
    }
};
