#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int low, int high, int target){
        int mid = (low + high)/2;
        if(low > high){
            return -1;
        }
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] > target){
            return search(nums, low, mid - 1, target);
        }
        else{
            return search(nums, mid + 1, high, target);
        }
    }
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int res = search(nums, low, high, target);
        return res;
        
    }
};