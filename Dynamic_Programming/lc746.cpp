
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map<int,int> dp;
    int fun(int i,  vector<int> &cost){
        int n = cost.size();
        if(i >= n){
            return 0;
        }
        if(dp.count(i)){
            return dp[i];
        }
        return dp[i] = cost[i] + min((fun(i+1,cost)), (fun(i+2, cost)));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int ans1 = fun(0, cost);
        int ans2 = fun(1,cost);
        return min(ans1,ans2);
    }
};