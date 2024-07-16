class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int> result;
        for(auto it:mpp){
            if(it.second>1){
                result.push_back(it.first);
            }
        }
        return result;
    }
};
