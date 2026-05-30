#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int curr = 0;
        int n = nums.size();

        unordered_map<int, int> map;

        map[nums[0]]++;

        for (int i = 0; i < n - 1; i++) {
            curr = nums[i + 1];

            int val = map[nums[i]];
            cout << val << endl;

            if (k == val + curr) {
                count++;
                cout << count << endl;
                map[nums[i]]--;
            }

            map[nums[i]]++;
        }

        return count;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 3};
    int k = 3;

    int ans = obj.subarraySum(nums, k);

    cout << "Answer = " << ans << endl;

    return 0;
}

// final

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int count = 0;
        int curr = 0;

        unordered_map<int, int> map;

        map[0] = 1;

        for(int i = 0; i < nums.size(); i++) {

            curr += nums[i];

            int need = curr - k;

            if(map.find(need) != map.end()) {
                count += map[need];
            }

            map[curr]++;
        }

        return count;
    }
};