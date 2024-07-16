class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p;
        vector<int>& nums3=nums1;
        p=nums3.size();
        p=m+n;
        int k=0;int i=0;int j=0;
        while(i<m){
            nums3[k++]=nums1[i++];
        }
     
        while(j<n){
            nums3[k++]=nums2[j++];
           
        }
        sort(nums3.begin(),nums3.end());



        
    }
};

// TC:O((N+M)*log(N+M))
// SC:O(N+M)
