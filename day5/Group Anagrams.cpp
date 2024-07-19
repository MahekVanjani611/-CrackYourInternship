class Solution {
public:


        vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mpp;

        for (string s : strs) {
            string sorted_str = s;
            sort(sorted_str.begin(), sorted_str.end());
            mpp[sorted_str].push_back(s);
        }

        for (auto it = mpp.begin(); it != mpp.end(); ++it) {
            ans.push_back(it->second);
        }

        
    
    return ans;
}};
