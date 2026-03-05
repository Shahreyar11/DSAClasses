#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        for(int i = 0; i<n; i++){
            if(i>end){
                break;
            }
            if(nums[i]==0){
                swap(nums[i], nums[start]);
                start++;
            }
            else if(nums[i]==1){
                continue;
            }
            else if(nums[i]==2){
                swap(nums[i], nums[end]);
                i--;
                end--;
            }
        }
        return;
    }
};