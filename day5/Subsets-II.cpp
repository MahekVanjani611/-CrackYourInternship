class Solution {
public:
void printsubsets(vector<int>& nums,vector<vector<int>>& result,int index,vector<int>& level){
    
    result.push_back(level);
    for(int i=index;i<nums.size();i++){
        if(i!=index && nums[i]==nums[i-1]){
            continue;
        }
        level.push_back(nums[i]);
        printsubsets(nums,result,i+1,level);
        level.pop_back();

    }
    
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          vector<vector<int>> result;
        vector<int>level;
        printsubsets(nums,result,0,level);
        return result;
    }
};
