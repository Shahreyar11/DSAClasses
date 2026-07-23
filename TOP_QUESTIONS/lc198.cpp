#include<bits/stdc++.h>
using namespace std;

// NAIVE APPROACH
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        // int res = INT_MIN;
        int odd_sum = 0;
        int even_sum = 0;
        for(int i = 0; i<n; i++){
            if(i % 2 == 0){
                even_sum += nums[i];
            }
            else{
                odd_sum += nums[i];
            }
        }
        return max(even_sum,odd_sum);
    }
};