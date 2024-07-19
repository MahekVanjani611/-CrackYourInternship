class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        unordered_map<int,int> freqCnt;
        int ans = 0;
        for(auto it : mp) {
            int cnt = it.second;
            if(freqCnt[cnt] != 0) {
                while(cnt > 0 && freqCnt[cnt] != 0) {
                    cnt--;
                    ans++;
                }
            }
            freqCnt[cnt]++;
        }
        return ans;
    }
};
