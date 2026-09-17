class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>> res(n, vector<int>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int newCol = (j - rowShift[i] + n) % n;
                res[i][newCol] = grid[i][j];
            }
        }
        vector<vector<int>> ans(n, vector<int>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int newRow = (i - colShift[j] + n) % n;
                ans[newRow][j] = res[i][j];
            }
        }
        return ans;      
    }
};©leetcode