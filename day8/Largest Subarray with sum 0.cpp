class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
    
 unordered_map<int, int> sum_index_map;
    int maxLen = 0;
    int prefix_sum = 0;

    for (int i = 0; i < n; ++i) {
        prefix_sum += arr[i];

        if (prefix_sum == 0) {
            maxLen = i + 1;
        }

        else if (sum_index_map.find(prefix_sum - 0) != sum_index_map.end()) {
            maxLen = max(maxLen, i - sum_index_map[prefix_sum - 0]);
        }

        if (sum_index_map.find(prefix_sum) == sum_index_map.end()) {
            sum_index_map[prefix_sum] = i;
        }
    }

    return maxLen;
        
    }
};
