class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();

        int index = -1;

        // STEP 1:
        // Find breakpoint

        for(int i = n - 2; i >= 0; i--) {

            if(nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // STEP 2:
        // If no breakpoint exists

        if(index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // STEP 3:
        // Find just bigger element from right side

        for(int i = n - 1; i > index; i--) {

            if(nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // STEP 4:
        // Reverse only right side

        reverse(nums.begin() + index + 1, nums.end());
    }
};