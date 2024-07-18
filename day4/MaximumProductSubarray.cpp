class Solution {
public:
  double maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;

        double max_prod = nums[0];
        double min_prod = nums[0];
        double result = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] < 0) {
                swap(max_prod, min_prod);
            }

            max_prod = max((double)nums[i], max_prod * nums[i]);
            min_prod = min((double)nums[i], min_prod * nums[i]);

            result = max(result, max_prod);
        }

        return result;
    }};
