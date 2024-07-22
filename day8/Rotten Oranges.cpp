class Solution {
public:
int r,c;
bool valid(int i,int j){
    return i>=0 && i<r && j>=0 && j<c;
}
    int orangesRotting(vector<vector<int>>& grid) {
         r=grid.size();
         c=grid[0].size();

        queue<pair<int,int>> q;
       bool freshOrangesExist = false;
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if (grid[i][j] == 1) {
                    freshOrangesExist = true;
                    break;
                }
            }
            if (freshOrangesExist) break;
        }

        if (!freshOrangesExist) {
            return 0; 
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==2){
                    q.push(make_pair(i,j));

                }}}
                 int timer=0;
        while(!q.empty()){
            timer++;
            int cur=q.size();
            while(cur--){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();

             if(valid(i-1,j)&& grid[i-1][j]==1){
                    grid[i-1][j]=2;
                    q.push(make_pair(i-1,j));
                }
                                if(valid(i+1,j)&& grid[i+1][j]==1){
                    grid[i+1][j]=2;
                    q.push(make_pair(i+1,j));
                }
                                if(valid(i,j+1)&& grid[i][j+1]==1){
                    grid[i][j+1]=2;
                    q.push(make_pair(i,j+1));
                }
                                if(valid(i,j-1)&& grid[i][j-1]==1){
                    grid[i][j-1]=2;
                    q.push(make_pair(i,j-1));
                }
            }  
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return timer-1;
    }
};
