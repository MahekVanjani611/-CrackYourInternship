
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
    stack<int> s;

    for (int i = nums2.size() - 1; i >= 0; --i) {
        int num = nums2[i];
        while (!s.empty() && s.top() <= num) {
            s.pop();
        }
   
        nextGreater[num] = s.empty() ? -1 : s.top();
 
        s.push(num);
    }

    vector<int> result;
    for (int num : nums1) {
        result.push_back(nextGreater[num]);
    }

    return result;
    }
};