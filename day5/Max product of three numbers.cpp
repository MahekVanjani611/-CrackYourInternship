class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sum=1;
        for(int i=n-1;i>=n-3;i--){
            sum*=nums[i];
        }
        int start=1;
        for(int i=0;i<2;i++){
            start*=nums[i];
        }
        return max(start*nums[n-1],sum);
    }
};
