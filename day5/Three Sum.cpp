class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<vector<int>> result;
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
       
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int x = nums[i];
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = x + nums[left] + nums[right];
                if (sum == 0) {
                    result.push_back({x, nums[left], nums[right]});
                    int leftVal = nums[left];
                    int rightVal = nums[right];

                    while (left < right && nums[left] == leftVal) left++;
             
                    while (left < right && nums[right] == rightVal) right--;
                } else if (sum < 0) {
                    left++; 
                } else {
                    right--;  
                }
            }
        }

        return result;
    }
};

