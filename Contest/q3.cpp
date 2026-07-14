// # Q2. Minimum Total Cost to Process All Elements
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        int curr_ava = k;
        int count_op = 0;
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            if(curr_ava < nums[i]){
                curr_ava += k;
                count_op++;
                i--;
            }
            else{
                curr_ava = curr_ava - nums[i];       
            }
        }
        while(count_op != 0){
            ans += count_op;
            count_op--;
        }
        return ans;
    }
};


class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long curr_ava = k;
        long long count_op = 0;

        for (int i = 0; i < nums.size(); i++) {
            while (curr_ava < nums[i]) {
                curr_ava += k;
                count_op++;
            }

            curr_ava -= nums[i];
        }

        return count_op * (count_op + 1) / 2;
    }
};