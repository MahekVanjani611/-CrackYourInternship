// prefix sum method important
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
     int cnt=0;
     int pre_sum=0;
     map<int,int>prefix;
     prefix[0]=1;
    
        for(int i=0;i<nums.size();i++){
            pre_sum+=nums[i];
            int mod=pre_sum % k;
           if(mod<0){
            mod+=k;
           }
          if(prefix.find(mod) != prefix.end()){
            cnt+=prefix[mod];
            prefix[mod]+=1;
          }
          else{
            prefix[mod]=1;
          }
                }
 return cnt;  }};
