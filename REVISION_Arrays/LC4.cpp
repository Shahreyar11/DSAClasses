// I did the brute force approach the memory limit exceeded
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> res;
    void fun(vector<int> &nums1, vector<int> &nums2){
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;
        while(i < n and j < m){
            if(nums1[i] > nums2[j]){
                res.push_back(nums2[j]);
                j++;
            }
            else{
                res.push_back(nums1[i]);
                i++;
            }
        }
        while(i < n){
            res.push_back(nums1[i]);
            i++;
        }
        while(j < m){
            res.push_back(nums2[j]);
            j++;
        }
        return;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        fun(nums1, nums2);
        int size = res.size();
        double median = 0;
        if(size % 2 == 0){  // its even
            int  mid = size / 2;
            int sum = res[mid-1] + res[mid];
            median = sum / 2.0;
        }
        else{  // its odd
            int mid2 = size/2;
            median = res[mid2] / 1.0;
        }
        return median;
    }
};