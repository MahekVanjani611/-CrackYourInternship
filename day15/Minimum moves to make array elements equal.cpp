class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int n=nums.size();
        int s;
        if(n<=1){
            return 0;
        }
        int mid=nums[n/2];
        for(int i=0;i<nums.size();i++){
            count+=abs(mid-nums[i]);
        }
        return count;
    }
};
