
class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // int ans=-1;
        sort(arr.begin(),arr.end());
        int i=0;
        int j=1;
        while(i<n && j<n){
                       if((arr[j]-arr[i])==x && i!=j){
           return 1;
                // break;
            }
            else if((arr[j]-arr[i])<x ){
                j++;
            }
            else {
                i++;
            }
 
        }
   
    return -1;
        
        // code here
    }
};
