class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise=0;
        int hare=0;
        do{
            tortoise=nums[tortoise];
         hare=nums[nums[hare]];
 
        
        }while(tortoise!=hare);
        tortoise=0;
        while(tortoise!=hare){
            tortoise=nums[tortoise];
            hare=nums[hare];
        }
        return hare;

    }
};

// TC:O(n) SC:O(1)

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Another Approach

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int ,int > mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int p=0  ;
              for(int i=0;i<nums.size();i++){
            
        
        if(mpp[nums[i]]>=2){
            p=nums[i];
        }}
        return p;
    }
};

// TC:O(N) SC:O(N)
