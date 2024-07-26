class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // wt,node,parent
         priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> p;
        vector<bool>ismst(V,0);
        vector<int>parent(V);
        int cost=0;
        p.push({0,{0,-1}});
        while(!p.empty()){
            int wt=p.top().first;
            int node=p.top().second.first;
            int par=p.top().second.second;
            p.pop();
            if(!ismst[node]){
                ismst[node]=1;
                cost+=wt;
                parent[node]=par;
                
                for(int j=0;j<adj[node].size();j++){
                    p.push({adj[node][j][1],{adj[node][j][0],node}});
                }
            }
        }
        return cost;
        
        // code here
    }
};
