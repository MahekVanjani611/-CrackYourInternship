class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        vector<int> ve;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ve.push_back(nums[i]);
            }
        }
        
        int number=(ve.size())+1;

        map<int,int> mpp;
        for(int j=1;j<=number;j++){
            mpp[j]=0;
        }
        for(int i=0;i<ve.size();i++){
            mpp[ve[i]]++;
        }
        int ans=0;
        for(auto it:mpp){
            if(it.second==0){
               ans= it.first;
               break;
            }
        }
        return ans;
    }
};
