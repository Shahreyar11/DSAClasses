#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int i =0;
        int j = n-1;
        int idx = n-1;
        while(i<=j){
            int n1 = abs(nums[i]);
            int n2 = abs(nums[j]);
            if(n1>n2){
                res[idx]=n1*n1;
                idx--;
                i++;
            }
            else{
                res[idx] = n2*n2;
                idx--;
                j--;
            } 
        }
        return res;
    }
};