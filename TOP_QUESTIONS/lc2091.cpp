class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int maxIndex = 0;
        int minIndex = 0;
        int mini = nums[0];
        for(int i = 0; i<n; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                maxIndex = i;
            }
        }
        for(int i = 0; i<n; i++){
            if(nums[i] < mini){
                mini = nums[i];
                minIndex = i;
            }
        }    
        int leftMin = minIndex + 1;
        int rightMin = n - minIndex;

        int leftMax = maxIndex + 1;
        int rightMax = n - maxIndex;

        int bothLeft = max(leftMin, leftMax);
        int bothRight = max(rightMin, rightMax);

        int minLeftMaxRight = leftMin + rightMax;
        int maxLeftMinRight = leftMax + rightMin;

        return min({
            bothLeft,
            bothRight,
            minLeftMaxRight,
            maxLeftMinRight
        });           

    }
};