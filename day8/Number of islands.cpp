class Solution {
public:
int r,c;
bool isValid(int i,int j,vector<vector<char>>& grid){
    return i>=0 && j>=0 && i<r && j<c && grid[i][j]=='1';
}
    int numIslands(vector<vector<char>>& grid) {
        r=grid.size();
        c=grid[0].size();
        int count=0;
        queue<pair<int,int>> q;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    ++count;
                    q.push(make_pair(i,j));
                    grid[i][j]='0';

                    while(!q.empty()){
                        int new_i=q.front().first;
                        int new_j=q.front().second;
                        q.pop();
                        
     
                if(isValid(new_i-1,new_j,grid)&& grid[new_i-1][new_j]=='1'){
                    grid[new_i-1][new_j]='0';
                    q.push(make_pair(new_i-1,new_j));
                }
                                if(isValid(new_i+1,new_j,grid)&& grid[new_i+1][new_j]=='1'){
                    grid[new_i+1][new_j]='0';
                    q.push(make_pair(new_i+1,new_j));
                }
                                if(isValid(new_i,new_j+1,grid)&& grid[new_i][new_j+1]=='1'){
                    grid[new_i][new_j+1]='0';
                    q.push(make_pair(new_i,new_j+1));
                }
                                if(isValid(new_i,new_j-1,grid)&& grid[new_i][new_j-1]=='1'){
                    grid[new_i][new_j-1]='0';
                    q.push(make_pair(new_i,new_j-1));
                }
                    }
                }
            }
        }
return count;
        
    }
};
