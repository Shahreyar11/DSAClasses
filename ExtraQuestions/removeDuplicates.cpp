#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int leader = nums[0]-1;
        int start = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]==leader){
                continue;
            }
            leader = nums[i];
            swap(nums[i], nums[start]);
            start++;
        }
        return start;
        
    }
};