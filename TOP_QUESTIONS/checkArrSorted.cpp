#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool solve(vector<int>& arr, int n){
        if(n == 1 || n ==  0){
            return true;
        }
        return arr[n-1] >= arr[n-2] && solve(arr, n-1);
    }
    bool isSorted(vector<int>& arr) {
        // code here
        int n = arr.size();
        return solve(arr, n);
    }
};