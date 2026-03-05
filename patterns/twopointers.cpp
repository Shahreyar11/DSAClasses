#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int low = 0;
        int high = n-1;
        vector<int> res(2);
        while(low<=high){
            int sum = numbers[low] + numbers[high];
            if(sum == target){
                res[0] = low + 1;
                res[1] = high + 1;
                break;
            }
            else if(sum < target){
                low++;
            }
            else if(sum > target){
                high--;
            }
        }
        return res;
    }
};