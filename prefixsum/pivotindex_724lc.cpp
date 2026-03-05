#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sum_nums(vector<int>& arr){
        int n = arr.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += arr[i];
        }
        return sum;
    }
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int sum = sum_nums(nums);
        for(int i = 0; i<n; i++){
            right = sum - nums[i] - left;
            if(left == right){
                return i;
            }
            left += nums[i];
        }
        return -1;

    }
}; 