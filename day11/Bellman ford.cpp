//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int> dist(V,1e8);
        dist[S]=0;
        int e=edges.size();
        for(int i=0;i<V-1;i++){
            for(int j=0;j<e;j++){
                int u=edges[j][0];
                int v=edges[j][1];
                int weight=edges[j][2];
                if(dist[u]==1e8) continue;
                if(dist[u]+weight<dist[v]){
                    dist[v]=dist[u]+weight;
                }
            }
        }
       vector<int >ans;
                        for(int j=0;j<e;j++){
                int u=edges[j][0];
                int v=edges[j][1];
                int weight=edges[j][2];
                if(dist[u]==1e8) continue;
                if(dist[u]+weight<dist[v]){
                    ans.push_back(-1);
                    return ans;
                }
            
        }
        return dist;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, m;
        cin >> N >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src;
        cin >> src;

        Solution obj;
        vector<int> res = obj.bellman_ford(N, edges, src);

        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
