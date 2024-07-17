class Solution {
public:
void func(int index,int target,vector<int>& candidates,vector<int> & comb,vector<vector<int>> &ans){
    
 
        if(target==0){
            ans.push_back(comb);
            return ;
        }
        
    
for (int i = index; i < candidates.size(); ++i) {
           
            if (i > index && candidates[i] == candidates[i - 1]) continue;
            if (candidates[i] > target) break; // Early stopping
            comb.push_back(candidates[i]);
            func(i + 1, target - candidates[i], candidates, comb, ans);
            comb.pop_back();
        }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>> ans;
        vector<int> comb;
        sort(candidates.begin(), candidates.end()); 
        func(0, target, candidates, comb, ans);
        return ans;
    }
};
