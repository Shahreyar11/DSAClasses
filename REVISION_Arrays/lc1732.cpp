#include<bits/stdc++.h>
using namespace std;
// BRUTE FORCE
class Solution {
public:
    vector<int> res;
    void fun(vector<int> &gain){
        int prev = 0;
        res.push_back(prev);
        int n = gain.size();
        for(int i = 0; i<n; i++){
            prev += gain[i];
            res.push_back(prev);
        }
    }
    int largestAltitude(vector<int>& gain) {
        fun(gain);
        int n = res.size();
        int max = res[0];
        for(int i = 0; i<n; i++){
            if(res[i] > max){
                max = res[i];
            }
        }
        return max;
    }
};

// A little better approach

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int max = 0;
        int prev = 0;
        for(int i = 0; i<n; i++){
            prev += gain[i];
            if(prev > max){
                max = prev;
            }
        }
        return max;
    }
};

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt = 0;
        int curr = 0;
        for (int g : gain) {
            curr += g;
            maxAlt = max(maxAlt, curr);
        }
        return maxAlt;
    }
};