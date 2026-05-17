// Again I tried brute force on this question
class Solution {
public:
    int findDig(int num){
        int digitCount = 0;

        while(num > 0){
            digitCount++;
            num = num / 10;
        }
        return digitCount;
    }
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for(int i = 0; i< n; i++){
            int count = findDig(nums[i]);
            if(count % 2 == 0){
                res++;
            }
        }
        return res;
    }
};

// It run through basic test cases but had a buffer error

// Editorial Approach

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        // Counter to count the number of even digit integers
        int evenDigitCount = 0;

        for (int num : nums) {
            if ((num >= 10 && num <= 99) || (num >= 1000 && num <= 9999) || num == 100000)
                evenDigitCount++;
        }

        return evenDigitCount;
    }
};


