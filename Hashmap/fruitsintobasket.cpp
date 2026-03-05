#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int low = 0;
        int high;
        int res = INT_MIN;
        unordered_map<int,int> f;

        // calculate frequency
        for(high = 0; high<n; high++){
            f[fruits[high]]++;
        
            // check if basket more than two used shrink
            while(f.size()>2){
                low++;
                f[fruits[low-1]]--;
                if(f[fruits[low-1]]==0){
                    f.erase(fruits[low-1]);
                }
            } 
            int len = high - low + 1;
            res = max(res,len);  
        } 
        // return maximum length
        return res;
    }
};