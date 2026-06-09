#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> res(n, false);
        int max = candies[0];
        for(int i = 1; i<n; i++){
            if(candies[i] > max){
                max = candies[i];
            }

        }
        for(int i = 0; i<n; i++){
            if(extraCandies + candies[i] >= max){
                res[i] = true;
            }
        }
        return res;
    }
};