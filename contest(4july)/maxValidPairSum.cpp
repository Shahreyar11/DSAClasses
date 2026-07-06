#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        // pair<int,int> p;
        int sum = 0;
        int best  = 0;
        int n = nums.size();
        int i = 0;
        int j = 1;
        for(int i = 0; i<n; i++){
            for(int j = 1; j<n; j++){
                if((j-i) >= k){
                    sum = nums[i] + nums[j];
                    best = max(best,sum);
                }
            }
        }
        return best;
    }
};

class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int best = nums[0];
        int ans = INT_MIN;
        for (int j = k; j < n; j++) {
            best = max(best, nums[j - k]);
            ans = max(ans, best + nums[j]);
        }
        return ans;
    }
};