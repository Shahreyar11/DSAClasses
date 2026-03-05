#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        int bestmax = arr[0];
        int bestmin = arr[0];
        int prevmax;
        int prevmin;
        int res = arr[0];
        for(int i = 1; i<n; i++){
            prevmax = bestmax;
            prevmin = bestmin;
            int ch1 = prevmax * arr[i];
            int ch2 = prevmin * arr[i];
            int ch3 = arr[i];

            bestmax = max(ch1, max(ch2, ch3));
            bestmin = min(ch1, min(ch2, ch3));
            res = max(res, bestmax);
        }
        return res;

    }
};