class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int ans=sum;
        for(int j=0;j<k;j++){
            sum-=cardPoints[k-j-1];
            sum+=cardPoints[n-j-1];
            ans=max(ans,sum);
        }
       return ans; 
    }
};
