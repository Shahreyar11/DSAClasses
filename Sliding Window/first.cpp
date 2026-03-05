#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int low = 0;
        int high = k-1;
        int sum = 0;
        int res = INT_MIN;
        for(int low = 0; low<=high; low++){
            sum += arr[low];
        }
        while(high < n){
            res = max(res, sum);
            
            low++;
            high++;
            
            if(high == n){
                break;
            }
            
            
            sum = sum - arr[low-1];
            sum = sum + arr[high];
        }
        return res;
    }
};