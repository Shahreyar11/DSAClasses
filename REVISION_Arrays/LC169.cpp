class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        int min = n/2;
        unordered_map<int,int> f;
        for(int i = 0; i<n; i++){
            f[nums[i]]++;
        }
        for(auto i: f){
            if(i.second > min){
                res = i.first;
            }
        }
        return res;
    }
};

// WITH Space O(1) also
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate = 0;
        int count = 0;

        for(int num : nums) {

            // If no active candidate survives
            if(count == 0) {
                candidate = num;
            }

            // Same element strengthens candidate
            if(num == candidate) {
                count++;
            }

            // Different element cancels candidate
            else {
                count--;
            }
        }

        return candidate;
    }
};