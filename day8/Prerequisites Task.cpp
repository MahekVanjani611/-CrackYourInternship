//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
	    // Code here
	     vector<vector<int>> adj(N);
        vector<int> inDegree(N);
        queue<int> q;
        int count = 0;

        for(int i=0;i<P;i++) {
            int a = prerequisites[i].first;
            int b = prerequisites[i].second;
            adj[b].push_back(a);
            inDegree[a]++;
        }

        for(int i = 0; i < N; i++) {
            if(inDegree[i] == 0)
                q.push(i);
        }

        while(!q.empty()) {

            int node = q.front();
            q.pop();
            count++;

            for(int child: adj[node]) {
                inDegree[child]--;
                if(inDegree[child] == 0)
                    q.push(child);
            }
        }

        return count == N;
    }
	
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends
