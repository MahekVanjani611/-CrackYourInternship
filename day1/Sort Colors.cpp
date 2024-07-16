class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0;  //No of zeroes
        int o=0;  //No of ones
        int t=0;  //No of twos
       for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            z++;
        }
        if(nums[i]==1){
            o++;
        }
        if(nums[i]==2){
            t++;
        }
       }
     for(int i=0;i<z;i++){
        nums[i]=0;
     }
     for(int j=z;j<z+o;j++){
        nums[j]=1;
     }
     for(int k=z+o;k<t+z+o;k++){
        nums[k]=2;
     }}};
