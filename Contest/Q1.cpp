#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size(); // no of rows
        vector<int> res(n,0);  //“Create a vector of size n and fill it with 0”
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                res[i] += matrix[i][j];  // this only adds up when there is 1 in the matrix , if zero no addition
            }
        }
        return res;
    }
};©leetcode