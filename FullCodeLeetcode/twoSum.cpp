#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){

            int need = target - nums[i];

            if(mp.count(need))
                return {mp[need], i};

            mp[nums[i]] = i;
        }

        return {};
    }
};

int main() {

    // Test case from LeetCode
    vector<int> nums = {2,7,11,15};
    int target = 9;

    // Create object
    Solution obj;

    // Call your function
    vector<int> ans = obj.twoSum(nums, target);

    // Print answer
    for(int x : ans)
        cout << x << " ";

    return 0;
}