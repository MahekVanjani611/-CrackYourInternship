class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxcap=min(height[i],height[j])*(j-i);
        int cap;
        while(j>i){
        cap=min(height[i],height[j])*(j-i);
        maxcap=max(maxcap,cap);
        if(height[i]<height[j]){
            i++;
        }
        else{
        j--;}
        
        }
        return maxcap;

        
    }
};
