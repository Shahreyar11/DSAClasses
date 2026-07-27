#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestInteger(int n, int s) {
        if(s > 9*n){
            return -1;
        }
        if(s == 0){
            return 0;
        }
        int ans = 0;
        while(s >=0 and n > 0){
            int dig = min(9,s);
            ans = ans*10 + dig;
            s -= dig;
            n--;
        }
        return ans;
        
    }
};©leetcode