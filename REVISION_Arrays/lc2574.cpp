class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n);
        vector<int> rightSum(n);
        leftSum[0] = 0;
        rightSum[n-1] = 0;
        for(int i = 1; i<n; i++){
            leftSum[i] = leftSum[i-1] + nums[i-1];
        }
        for(int i = n-2; i>= 0; i--){
            rightSum[i] = rightSum[i+1] + nums[i+1];
        }
        if((leftSum.size() == 0) or (rightSum.size() == 0)){
            return {0};
        }
        vector<int> res(n);
        for(int i = 0; i<n; i++){
            int diff = abs(leftSum[i] - rightSum[i]);
            res[i] = diff;
        }
        return res;
    }
};