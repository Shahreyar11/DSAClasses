#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int left = 0;
        int high = k;
        int sum = 0;
        int count = 0;
        for(int i = 0; i<high; i++){
            sum += arr[i];
        }
        if(sum >= threshold * k){
            count++;
        }    
        
        for(int high = k; high<n; high++){
            sum += arr[high];
            sum -= arr[high-k];
            if(sum >= threshold * k){
                count++;
            }
        }
        return count;

    }
};