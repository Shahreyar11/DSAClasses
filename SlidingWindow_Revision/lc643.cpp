// 121/128 Test Cases Passed Edge Cases missed


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res = 0;
        double avg;
        double sum = 0;
        int n = nums.size();
        int low = 0;
        int high = k - 1;
        for(int i = 0; i<= high; i++){
            sum = sum + nums[i];
        }
        while(high < n){
            avg = sum / k;
            res = max(res, avg);
            low++;
            high++;
            sum = sum - nums[low -1];
            if(high == n){
                break;
            }
            sum = sum + nums[high];
        }
        return res;
    }
};

// Shorter Solution with all test cases passed



class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double sum = 0;

        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        double maxSum = sum;  // assigning maxSum not equal to 0 but a variable to handle all test cases

        for(int i = k; i < nums.size(); i++){
            sum += nums[i];
            sum -= nums[i-k];

            maxSum = max(maxSum, sum);   // we are not calculating avg on every iteration, as maxSum will eventually have maximum avg
        }

        return maxSum / k;  // atlast return the avg
    }
};
