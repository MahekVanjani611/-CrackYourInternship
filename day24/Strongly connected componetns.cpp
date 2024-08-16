#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void dfs(int node, vector<int> &vis, vector<vector<int>> &adj, stack<int> &st) {
        vis[node] = 1;
        for (int neighbor : adj[node]) {
            if (!vis[neighbor]) {
                dfs(neighbor, vis, adj, st);
            }
        }
        st.push(node);
    }

    void dfsTranspose(int node, vector<int> &vis, vector<vector<int>> &adjT) {
        vis[node] = 1;
        for (int neighbor : adjT[node]) {
            if (!vis[neighbor]) {
                dfsTranspose(neighbor, vis, adjT);
            }
        }
    }

public:
    int kosaraju(int V, vector<vector<int>> &adj) {
        vector<int> vis(V, 0);
        stack<int> st;

        // Step 1: Perform DFS on the original graph and push nodes onto the stack
        for (int i = 0; i < V; ++i) {
            if (!vis[i]) {
                dfs(i, vis, adj, st);
            }
        }

        // Step 2: Create the transposed graph
        vector<vector<int>> adjT(V);
        for (int i = 0; i < V; ++i) {
            for (int neighbor : adj[i]) {
                adjT[neighbor].push_back(i);
            }
        }

        // Step 3: Perform DFS on the transposed graph to find SCCs
        fill(vis.begin(), vis.end(), 0);
        int sccCount = 0;
        while (!st.empty()) {
            int node = st.top();
            st.pop();
            if (!vis[node]) {
                sccCount++;
                dfsTranspose(node, vis, adjT);
            }
        }

        return sccCount;
    }
};
