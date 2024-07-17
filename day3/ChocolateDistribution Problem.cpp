class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code;
    sort(a.begin(),a.end());
    long long minm=INT_MAX;
    for(int i=0;i<=abs(m-n);i++){
        minm=min(minm,(a[m+i-1]-a[i]));
    }
    return minm;
    
    }   
};

// TC:O(NLOGN)
// SC:O(1)
