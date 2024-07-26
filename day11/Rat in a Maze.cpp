class Solution {
  public:
  int r,c;
  bool valid(int i,int j){
      return i>=0 && i<r && j>=0 && j<c;
  }
  void dfs(vector<vector<int>> &mat, int i, int j, string path, vector<string> &result, vector<vector<bool>> &vis){
      if (i == r - 1 && j == c - 1) {
            result.push_back(path);
            return;
        }
        
        vis[i][j] = 1;
          if(valid(i,j-1) && !vis[i][j-1] &&  mat[i][j-1]==1 ){
                // vis[i][j-1]=1;
     dfs(mat, i, j-1, path + 'L', result, vis);
                
            }
                        if( valid(i,j+1) &&!vis[i][j+1] && mat[i][j+1]==1 ){
                // vis[i][j+1]=1;
 dfs(mat, i, j+1, path + 'R', result, vis);
                
            }
                        if( valid(i-1,j) && !vis[i-1][j] && mat[i-1][j]==1 ){
            //   vis[i-1][j]=1;
 dfs(mat, i-1, j, path + 'U', result, vis);
                
            }
                        if(valid(i+1,j) && !vis[i+1][j] && mat[i+1][j]==1 ){
            //   vis[i+1][j]=1;
              dfs(mat, i+1, j, path + 'D', result, vis);
              
                
            }
             vis[i][j] = false;
            
  }
     vector<string> findPath(vector<vector<int>> &mat){
     r=mat.size();
     c=mat[0].size();
  vector<string> result;
  if (mat[0][0] == 0 || mat[r-1][c-1] == 0) {
            return result; 
        }
        vector<vector<bool>>vis(r,vector<bool>(c,0));
         dfs(mat, 0, 0, "", result, vis);
        sort(result.begin(), result.end()); 
        return result;
           
    }
};
