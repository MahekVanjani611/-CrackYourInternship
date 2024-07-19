// DFS--------------------------------------------------------------------------------------------------------------------
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void DFS(int node,vector<int> adj[],vector<bool> &visited,stack<int>&s){
	    visited[node]=1;
	    for(int j=0;j<adj[node].size();j++){
	        if(!visited[adj[node][j]]){
	            DFS(adj[node][j],adj,visited,s);
	        }
	    }
	    s.push(node);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<bool>visited(V,0);
	    stack<int> s;
	    for(int i=0;i<V;i++){
	        if(!visited[i])
	    DFS(i,adj,visited,s);
	        
	    }
	    vector<int> ans;
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	        
	    }
	    return ans;
	    
	    // code here
	}

// BFS-------------------------------------------------------------------------------------------------------------------------------------------------------------
public:
vector<int> topoSort(int V, vector<int> adj[]) {
    vector<int>ans;
    vector<int>Indeg(V,0);
    for(int i=0;i<V;i++){
        for(int j=0;j<adj[i].size();j++){
                Indeg[adj[i][j]]++;
        }
        
    }
    queue<int> q;
    for(int i=0;i<V;i++){
        if(!Indeg[i]){
            q.push(i);
        }
       
    }
     while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(int j=0;j<adj[node].size();j++){
                Indeg[adj[node][j]]--;
                if(Indeg[adj[node][j]]==0){
                    q.push(adj[node][j]);
                }
                
            }
        }
    return ans;
}

};
