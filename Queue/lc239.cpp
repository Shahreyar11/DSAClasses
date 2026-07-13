#include<bits/stdc++.h>
using namespace std;

// TLE:

class Solution {
public:
    int checkMax(queue<int> q) {  
        int maxi = q.front();

        while (!q.empty()) {
            if (q.front() > maxi) {
                maxi = q.front();
            }

            q.pop();
        }

        return maxi;
    }

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res;

        if (n == 1) {
            return nums;
        }

        queue<int> q;

        for (int i = 0; i < k; i++) {
            q.push(nums[i]);
        }

        int curr_max = checkMax(q);
        res.push_back(curr_max);

        int high = k;

        while (high < n) {       
            int curr = nums[high];

            q.pop();
            q.push(curr);

            curr_max = checkMax(q);
            res.push_back(curr_max);

            high++;              
        }

        return res;
    }
};




class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> dq; // stores indices

        for (int i = 0; i < nums.size(); i++) {

            // 1. Remove index that has gone outside the window
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // 2. Remove smaller elements from the back
            // They can never become maximum while nums[i] exists
            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }

            // 3. Add current index
            dq.push_back(i);

            // 4. Window of size k is ready
            if (i >= k - 1) {
                res.push_back(nums[dq.front()]);
            }
        }

        return res;
    }
};