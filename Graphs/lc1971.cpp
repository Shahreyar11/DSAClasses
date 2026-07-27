#include<bits/stdc++.h>

using namespace std;

// same logic going on every node and checking if its connected or not 

class Solution {
public:
    bool dfs(int node, int destination, vector<vector<int>>& adj, vector<bool>& vis) {
        if (node == destination)
            return true;

        vis[node] = true;

        for (int neighbour : adj[node]) {
            if (!vis[neighbour]) {
                if (dfs(neighbour, destination, adj, vis))
                    return true;
            }
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto &edge: edges){
            // vector<int> edge = edges[i];  // extracting single vector from matrix
            int src = edge[0]; 
            int dest = edge[1];

            adj[src].push_back(dest);
            adj[dest].push_back(src);
        }
        vector<bool> vis(n, false);
        return dfs(source, destination, adj, vis);
    }
};