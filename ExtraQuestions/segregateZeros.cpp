// User function template for C++
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int start = 0;
        for(int i = 0; i<n; i++){
            int num = arr[i];
            if(num == 1){
                continue;
            }
            swap(arr[i], arr[start]);
            start++;
        }
        return arr;
    }
};