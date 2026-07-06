#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n-1; i++){
            int minIndex = i;
            for(int j = i; j<n; j++){
                if(nums[j] < minIndex){
                    minIndex = j;
                }
            }
            swap(nums[i], nums[minIndex]);
        }
        return nums;
    }
};