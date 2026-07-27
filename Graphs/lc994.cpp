#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> x = {-1, 1, 0, 0};
    vector<int> y = {0, 0, -1, 1};

    bool isValid(int i, int j, int n, int m){
        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int minutes = 0;

        queue<pair<int,int>> q;
        int fresh = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2)
                    q.push({i,j});
                else if(grid[i][j] == 1)
                    fresh++;
            }
        }


        while(!q.empty() && fresh > 0){
            int sz = q.size();

            while(sz--){
                auto [i,j] = q.front();
                q.pop();

                for(int k = 0; k < 4; k++){
                    int row = i + x[k];
                    int col = j + y[k];

                    if(isValid(row,col,n,m) && grid[row][col] == 1){
                        grid[row][col] = 2;   // rot it
                        fresh--;
                        q.push({row,col});
                    }
                }
            }

            minutes++;
        }

        if(fresh > 0)
            return -1;

        return minutes;
    }
};