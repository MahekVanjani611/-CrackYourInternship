//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<int>adj[K];
        vector<int>InDeg(K,0);
        for(int i=0;i<N-1;i++){
            string str1=dict[i];
            string str2=dict[i+1];
            int j=0,k=0;
            while(j<str1.size() && k<str2.size() && str1[j]==str2[k]){
                j++;
                k++;
            }
            if(j==str1.size()){
                continue;
            }
            adj[str1[j]-'a'].push_back(str2[k]-'a');
            InDeg[str2[k]-'a']++;
            
        }
          queue<int> q;
    // Initialize the queue with all vertices with in-degree 0
    for (int i = 0; i < K; i++) {
        if (!InDeg[i]) {
            q.push(i);
        }
    }
    string ans;

    // Process nodes in the queue
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        ans+=(node+'a');

        // Reduce in-degree of adjacent vertices
        for (int j = 0; j < adj[node].size(); j++) {
            InDeg[adj[node][j]]--;
            if (InDeg[adj[node][j]] == 0) {
                q.push(adj[node][j]);
            }
        }
    }
    return ans;
    }
};

//{ Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
