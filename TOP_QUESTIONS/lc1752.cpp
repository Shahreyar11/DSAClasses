#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        int rotate = 0;
        while(rotate < n){
            if(temp == nums){
                return true;
            }            
            int last = temp[n-1];
            for(int i = n-1; i > 0; i--){
                temp[i] = temp[i-1];
            }
            temp[0] = last;
            rotate++;
        }
        return false;
    }
};