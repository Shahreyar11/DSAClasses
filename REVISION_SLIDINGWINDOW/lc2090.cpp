#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res(n, -1);
        int left = 0;
        long long right = 2*k;
        long long sum = 0;
        int count = k + k + 1;
        if (2 * k + 1 > n) {
            return res;
        }       
        for(int i = left; i<= right; i++){
            sum += nums[i];
        }
        int avg = sum/count;
        res[k] = avg;
        for(int i = k+1; i<n-k; i++){
            sum += nums[right+1];
            sum -= nums[left];
            left++;
            right++;
            avg = sum/count;
            res[i] = avg;
        }
        return res;



    }
};