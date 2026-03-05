#include<bits/stdc++.h>
using namespace std;

// Q 1749

class Solution {
public:
    int maxAbsoluteSum(vector<int>& arr) {
        int n = arr.size();
        int bestmax = arr[0];
        int bestmin = arr[0];
        int resmax = max(0, arr[0]);
        int resmin = min(0,arr[0]);
        for(int i = 1; i<n; i++){
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
        int r1 = abs(resmax);
        int r2 = abs(resmin);
        return max(r1, r2);
        
    }
};