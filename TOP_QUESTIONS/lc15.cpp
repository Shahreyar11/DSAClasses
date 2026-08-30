#include<bits/stdc++.h>
using namespace std;

// BRUTE Solution of Leetcode 15 3 Sum
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        set<vector<int>> s;  // to store unique triplets
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                for(int k = j+1; k<n; k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> curr = {nums[i], nums[j], nums[k]};
                        sort(curr.begin(), curr.end());
                        if(s.find(curr) == s.end()){
                            s.insert(curr);
                            res.push_back(curr);
                        }
                    }
                }
            }
        }
        return res;
        
    }
};


// Better Solution
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> uniqueTriplets;  // to store unique triplets
        for(int i = 0; i<n; i++){
            int tar = -nums[i];  // we need tar to make 0
            set<int> s;

            for(int j = i+1; j<n; j++){
                int to_find = tar - nums[j];

                if(s.find(to_find) != s.end()){
                    vector<int> trip = {nums[i], nums[j], to_find};
                    sort(trip.begin(), trip.end());
                    uniqueTriplets.insert(trip);
                }
                s.insert(nums[j]);
            }

        }
        vector<vector<int>> res(uniqueTriplets.begin(), uniqueTriplets.end());
        return res;
        
    }
};