#include<bits/stdc++.h>
using namespace std;

// Q 918

class Solution {
public:

    int maxSubarraySumCircular(vector<int>& arr) {        
        int n = arr.size();
        int bestmax = arr[0];
        int bestmin = arr[0];
        int sum = arr[0];
        int resmax = arr[0];
        int resmin = arr[0];
        for(int i = 1; i<n; i++){
            sum = sum + arr[i];
            int prevmax = bestmax;
            int ch1 = prevmax + arr[i];
            int ch2 = arr[i];
            bestmax = max(ch1, ch2);
            resmax = max(resmax, bestmax);

            int prevmin = bestmin;
            int ch3 = prevmin + arr[i];
            int ch4 = arr[i];
            bestmin = min(ch3, ch4);
            resmin = min(resmin, bestmin);

        }
        if(resmax < 0){
            return resmax;
        }
        return max(resmax, sum - resmin);
        
    }
};