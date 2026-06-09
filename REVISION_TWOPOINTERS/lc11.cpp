// Brute force did 8/65 cases passed Rest failed
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
       int n = height.size();
       int res = INT_MIN;
       int left = 0;
       int right = n-1;
       while(left < right){
        if(height[left] < height[right]){
            int area = height[left] * height[left];
            res = max(area,res);
            left++;
        }
        else if(height[left] > height[right]){
            int area  = height[right] * height[right];
            res = max(area, res);
            right--;
        }
        else{
            int area = height[left] * height[right];
            res = max(area, res);
            left++;
        }
       } 
       return res;
    }
};

/// Looked for the Solution
class Solution {
public:
    int maxArea(vector<int>& height) {
       int n = height.size();
       int res = INT_MIN;
       int left = 0;
       int right = n - 1;

       while(left < right){
            int area = min(height[left], height[right]) * (right - left);
            res = max(area, res);

            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
       }

       return res;
    }
};