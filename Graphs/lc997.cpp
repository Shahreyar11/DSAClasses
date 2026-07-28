#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        vector<int> trustCount(n + 1, 0);
        vector<int> trustsSomeone(n + 1, 0);

        for (auto &edge : trust) {
            int a = edge[0];
            int b = edge[1];

            trustCount[b]++;      
            trustsSomeone[a] = 1; 
        }

        for (int i = 1; i <= n; i++) {
            if (trustCount[i] == n - 1 && trustsSomeone[i] == 0)
                return i;
        }

        return -1;
    }
};