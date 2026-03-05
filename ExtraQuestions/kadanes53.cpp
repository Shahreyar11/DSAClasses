#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int res;
        int bestending;
        // i = 0
        bestending = nums[0];
        res = bestending;
        for(int i = 1; i<n; i++){
            // int prevday = bestending;
            int choice1 = bestending + nums[i];
            int choice2 = nums[i];
            bestending = max(choice1, choice2);
            res = max(res, bestending);
        }
        return res;
    }
};