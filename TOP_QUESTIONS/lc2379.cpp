#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int count_whites = 0;
        int res = INT_MAX;
        vector<int> freq(2,0);
        for(int i = 0; i<k; i++){
            if(blocks[i] == 'W'){
                freq[0]++;
            }
            else{
                freq[1]++;
            }
        }
        int need = freq[0];
        if(need == 0){
            return 0;
        }
        res = min(res,need);
        int low = 0;
        int high = k;
        while(high < n){
            if(blocks[low] == 'W'){
                freq[0]--;
            }
            else{
                freq[1]--;
            }            
            if(blocks[high] == 'W'){
                freq[0]++;
            }
            else{
                freq[1]++;
            }
            res = min(res,freq[0]);
            low++;
            high++;
        }
        return res;
    }
};