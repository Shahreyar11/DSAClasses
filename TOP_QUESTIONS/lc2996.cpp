class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int> freq;
        int curr_max = 0;
        for(int i = 0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        int prefix = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]+1){
                prefix += nums[i];
            }
            else{
                break;
            }
        }
        int ans = prefix;
        while(freq.count(ans)){
            ans++;
        }
        return ans;
    }
};