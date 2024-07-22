//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int r;
int c;
bool valid(int i,int j){
    return i>=0 && j>=0 && i<r && j<c;
}
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
       r=n;
       c=m;
       queue<pair<int,int>> q;
     
           for(int j=0;j<c;j++){
               if(mat[0][j]=='O'){
                   q.push(make_pair(0,j));
                   mat[0][j]='T';
               }
               
           }
           
                      for(int i=1;i<r;i++){
               if(mat[i][0]=='O'){
                   q.push(make_pair(i,0));
                   mat[i][0]='T';
               }
               
           }
                      for(int j=1;j<c;j++){
               if(mat[r-1][j]=='O'){
                   q.push(make_pair(r-1,j));
                   mat[r-1][j]='T';
               }
               
           }
                      for(int i=1;i<r-1;i++){
               if(mat[i][c-1]=='O'){
                   q.push(make_pair(i,c-1));
                   mat[i][c-1]='T';
               }
               
           }
           while(!q.empty()){
               int i=q.front().first;
               int j=q.front().second;
               q.pop();
               
                 if(valid(i-1,j)&& mat[i-1][j]=='O'){
                    mat[i-1][j]='T';
                    q.push(make_pair(i-1,j));
                }
                                if(valid(i+1,j)&& mat[i+1][j]=='O'){
                    mat[i+1][j]='T';
                    q.push(make_pair(i+1,j));
                }
                                if(valid(i,j+1)&& mat[i][j+1]=='O'){
                    mat[i][j+1]='T';
                    q.push(make_pair(i,j+1));
                }
                                if(valid(i,j-1)&& mat[i][j-1]=='O'){
                    mat[i][j-1]='T';
                    q.push(make_pair(i,j-1));
                }
           }
           for(int i=0;i<r;i++){
               for(int j=0;j<c;j++){
                   if(mat[i][j]=='O'){
                       mat[i][j]='X';
                   }
                   else if(mat[i][j]=='T'){
                       mat[i][j]='O';
                   }
               }
           }
       return mat;
        
        
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
