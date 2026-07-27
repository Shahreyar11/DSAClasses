#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> x = {-1, 1, 0, 1};
    vector<int> y = {0, 0, -1, 1};
    bool isValid(int i, int j, int n, int m){
        if(i<0 or i >= n or j < 0 or j >=m){
            return false;
        }
        return true;
    }

    void dfs(vector<vector<int>> &grid, int n, int m, int i, int j, vector<vector<bool>> &vis){
        vis[i][j] = 1;
        for(int k = 0; k<4; k++){
            int row = i + x[k];
            int col = j + y[k];
            if((isValid(row, col, n, m)) && grid[row][col] == 1 && vis[row][col] == false){
                dfs(grid,n,m,row,col,vis);
            }
        }
        return;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool> (m, false));
        int min = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 2){
                    dfs(grid,n,m,i,j,vis);
                    min++;
                }
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(vis[i][j] == 0){
                    return -1;
                }
            }
        }
        return min;        
    };
};

// 92/300 passed