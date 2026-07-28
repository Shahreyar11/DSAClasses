#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int x1 = edges[0][0];
        int y1 = edges[0][1];
        int curr_center;
        for(int i = 1; i<edges.size(); i++){
            int x2 = edges[i][0];
            int y2 = edges[i][1];
            if(x1 == x2 or x1 == y2){
                curr_center = x1;
            }
            else if(y1 == y2 or y1 == x2){
                curr_center = y1;
            }
        }
        return curr_center;
    }
};