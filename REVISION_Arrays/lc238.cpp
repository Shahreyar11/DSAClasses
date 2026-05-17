class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> answer(n);

        // First element has no left side
        answer[0] = 1;

        // Build left products
        for(int i = 1; i < n; i++) {
            answer[i] = nums[i - 1] * answer[i - 1];
        }

        // Maintain right side product
        int rightProduct = 1;

        // Traverse from right
        for(int i = n - 1; i >= 0; i--) {

            answer[i] = answer[i] * rightProduct;

            rightProduct *= nums[i];
        }

        return answer;
    }
};

// Cannot solve it but understood now


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        answer[0] = 1;

        for(int i = 1; i<n; i++){
            answer[i] = nums[i-1] * answer[i-1];
        }
        int rightProduct = 1;
        for(int i = n-1; i>= 0; i--){
            answer[i] = answer[i] * rightProduct;
            rightProduct *= nums[i]; // add right side of element for multiplication for next iteration
        }
        return answer;
    }
};