
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> x = {0,0,-1,1};
    vector<int> y = {-1,1,0,0};
    bool isValid(int n, int m, int row, int col){
        if(row < 0 || row >= n || col < 0 || col >= m){
            return false;
        }
        return true;
    }
    int dfs(vector<vector<int>>& grid, int n, int m, int i, int j, vector<vector<bool>>& vis){
        vis[i][j] = true;
        int area = 1;
        for(int k = 0; k<4; k++){
            int row = i + x[k];
            int col = j + y[k];
            if((isValid(n,m,row,col)) && grid[row][col] == 1 && vis[row][col] == false){
                area += (dfs(grid, n, m, row, col, vis));
            }
        }
        return area;

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int curr_area = 0;
        int res = 0;
        vector<vector<bool>> vis(n, vector<bool>(m,false));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 1){
                    curr_area = dfs(grid, n, m, i,j, vis);
                    res = max(res,curr_area);
                }
            }
        }
        return res;

    }
};