//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool cycledetect(int node,int parent,vector<int>adj[],vector<bool>& vis){
      vis[node]=1;
      for(int i=0;i<adj[node].size();i++){
            if(parent==adj[node][i]){
                continue;
            }
            if(vis[adj[node][i]]){
                return 1;
            }
            if(cycledetect(adj[node][i],node,adj,vis)){
                return 1;
            }
            
        }
      return 0;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
    vector<bool> vis(V, false);
        for (int i = 0; i < V; i++) {
            if (!vis[i] && cycledetect(i, -1, adj, vis)) {
                return true;
            }
        }
        return false;
      
     
    }
};
   

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends
