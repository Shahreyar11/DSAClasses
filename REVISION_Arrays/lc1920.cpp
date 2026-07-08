#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i = 0; i<n; i++){
            ans[i] = nums[nums[i]];
        }
        return ans;

    }
};

//91/99 cases
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int res = 0;
        for(int i = 0; i < n; i++) {

            int count = 1;       
            // go left
            int j = i - 1;
            while(j >= 0 && heights[j] >= heights[i]) {
                count++;
                j--;
            }

            // go right

            j = i + 1;
            while(j < n && heights[j] >= heights[i]) {
                count++;
                j++;
            }
            int area = heights[i] * count;
            res = max(res, area);
        }
        return res;
    }
};