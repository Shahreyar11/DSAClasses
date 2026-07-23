#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void dfs(vector<vector<int>> &adj, int node, vector<int> &res, vector<bool> &vis){
        res.push_back(node);
        vis[node] = true;
        for(int i = 0; i<adj[node].size(); i++){
            int neigh = adj[node][i];
            if(vis[neigh] == false){
                dfs(adj,neigh,res,vis);
            }
        }
        return;
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int> res;
        vector<bool> vis(n,0);
        dfs(adj,0,res,vis);
        return res;
    }
};