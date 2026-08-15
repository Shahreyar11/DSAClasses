class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        // If the XOR of the entire array is 0, and you remove one non-zero element x, then the XOR of the remaining n-1 elements becomes x, which is non-zero.
        int curr = 0;
        for (int i = 0; i < nums.size(); i++) {
            curr = curr ^ nums[i];
        }
        if (curr != 0) {
            return nums.size();
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                return nums.size() - 1;
            }
        }
        return 0;
    }
};