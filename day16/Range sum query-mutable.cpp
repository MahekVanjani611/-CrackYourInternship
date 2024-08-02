class NumArray {
public:
vector<int>s;
int sum;
    NumArray(vector<int>& nums) {
        s=nums;
        sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
    }
    
    void update(int index, int val) {
         sum-=s[index];    
        s[index]=val;
        sum+=val;
        
        
        
    }
    
    int sumRange(int left, int right) {
int res=sum; 
        for(int i=0;i<left;i++){   
            res-=s[i];
        }
        for(int i=right+1;i<s.size();i++){
            res-=s[i];
        }
        return res;
    }
};
