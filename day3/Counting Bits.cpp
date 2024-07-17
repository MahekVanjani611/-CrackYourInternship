class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n + 1);
        for (int i = 0; i <= n; ++i) {
            result[i] = countOnes(i);
        }
        return result;
    }
    
    int countOnes(int num) {
        int count = 0;
        while (num > 0) {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }
};
