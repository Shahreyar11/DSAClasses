#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size(); // no of rows
        vector<int> res(n,0);  //“Create a vector of size n and fill it with 0”
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                res[i] += matrix[i][j];  // this only adds up when there is 1 in the matrix , if zero no addition
            }
        }
        return res;
    }
};


class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        int curr_ava = k;
        int count_op = 0;
        int ans = 0;
        int mod = 1000000007;

        for (int i = 0; i < nums.size(); i++) {
            if (curr_ava < nums[i]) {
                curr_ava += k;
                count_op++;
                i--;
            }
            else {
                curr_ava -= nums[i];
            }
        }

        while (count_op != 0) {
            ans = (ans + count_op) % mod;   // just mod it with mod thats all we have to do 
            count_op--;
        }

        return ans;
    }
};