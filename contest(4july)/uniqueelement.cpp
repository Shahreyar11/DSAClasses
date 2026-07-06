#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int> f;
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid = (low + high)/2;
        for(int i = 0; i<n; i++){
            f[nums[i]]++;
        }
        if(f[nums[mid]] > 1){
            return false;
        }
        return true;       
    }
};