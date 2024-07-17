class Solution {
    static bool compare(pair<int, int> p1, pair<int, int> p2) {
    
        if (p1.second == p2.second)
            return p1.first > p2.first;

        return p1.second > p2.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mpp;
        for (int num : nums) {
            mpp[num]++;
        }

        vector<pair<int, int>> freq_arr(mpp.begin(), mpp.end());
        sort(freq_arr.begin(), freq_arr.end(), compare);

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(freq_arr[i].first);
        }
        return result;
    }
};
