//Brute Force
// Time Complexity: O(n2) 
// Space Complexity:O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
              bool flag;
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<nums.size();j++){
          
                if(target==nums[i]+nums[j]){
                    flag=1;
                    

                }
                
                else{
                    flag=0;

                }
                if(flag==1 && i!=j && j>i){
                    result.push_back(i);
                    result.push_back(j);}
                    
               }
               if(flag==1){
                break;
               }
          
            
        }
        return result;
        
    }
};

// Optimised Approach
