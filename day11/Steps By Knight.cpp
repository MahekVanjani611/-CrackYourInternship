class Solution 
{
    public:
      int r,c;
    bool valid(int i,int j){
      return i>=0 && i<r && j>=0 && j<c;
  }
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    vector<vector<int>> grid(N,vector<int>(N,0));
	         r=grid.size();
     c=grid[0].size();
        // if (grid[KnightPos[0]][KnightPos[1]] == 1 || grid[TargetPos[0]][TargetPos[1]] == 1) return -1;
        // // vector<vector<bool>>vis(r,vector<bool>(c,0));
 
        queue<pair<int,pair<int,int>>> q;
        int startX = KnightPos[0] - 1; // Convert to 0-based index
        int startY = KnightPos[1] - 1; // Convert to 0-based index
        int targetX = TargetPos[0] - 1; // Convert to 0-based index
        int targetY = TargetPos[1] - 1; // Convert to 0-based index
        q.push({startX,{startY,0}});
        grid[startX][startY]=1;
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second.first;
            int s=q.front().second.second;
            q.pop();

            if(i==targetX && j==targetY){
                return s;
            }
            if(valid(i+2,j-1) &&   grid[i+2][j-1]==0 ){
                
                grid[i+2][j-1]=1;
                q.push({i+2,{j-1,s+1}});
                
            }
                        if( valid(i+2,j+1) && grid[i+2][j+1]==0 ){
                
                grid[i+2][j+1]=1;
                q.push({i+2,{j+1,s+1}});
                
            }
                        if( valid(i-2,j+1) &&  grid[i-2][j+1]==0 ){
               
                grid[i-2][j+1]=1;
                 q.push({i-2,{j+1,s+1}});
                
            }
                        if(valid(i-2,j-1) &&  grid[i-2][j-1]==0 ){
               
                grid[i-2][j-1]=1;
                 q.push({i-2,{j-1,s+1}});
                
            }
                                    if(valid(i+1,j+2) &&  grid[i+1][j+2]==0 ){
               
                grid[i+1][j+2]=1;
                 q.push({i+1,{j+2,s+1}});
                
            }
                                    if(valid(i+1,j-2) &&  grid[i+1][j-2]==0 ){
               
                grid[i+1][j-2]=1;
                 q.push({i+1,{j-2,s+1}});
                
            }
                                    if(valid(i-1,j+2) &&  grid[i-1][j+2]==0 ){
               
                grid[i-1][j+2]=1;
                 q.push({i-1,{j+2,s+1}});
                
            }
                                    if(valid(i-1,j-2) &&  grid[i-1][j-2]==0 ){
               
                grid[i-1][j-2]=1;
                 q.push({i-1,{j-2,s+1}});
                
            }
            
        }
        return -1;
	    // Code here
	}
};
