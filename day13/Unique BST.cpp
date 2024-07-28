class Solution {
public:
int catalan(int n){
        int ans=0;
    if(n<=1){
        return 1;
    }

    else{
        for(int i=0;i<n;i++){
            ans+=(catalan(n-i-1)*catalan(i));
        }

    }
    return ans;
}
    int numTrees(int n) {
        int res=catalan(n);
        return res;
        
    }
};
