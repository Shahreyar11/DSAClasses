class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int res = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] > nums[n - 1]) { // So actually we set the last element as the reference
                // this reference either tells, if mid is greater then the array is rotated
                // and if lesser then its not rotated we store the result
                // and check again further
                low = mid + 1;
            }
            else{
                res = mid;
                high = mid - 1;
            }
        }
        return nums[res];
    }
};