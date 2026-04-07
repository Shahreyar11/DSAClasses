// User function Template for C++

#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int largest(int arr[], int n) {
        // code here
        if(n==1){
            return arr[0];
        }
        int last = arr[n-1];
        int ans = largest(arr, n-1);
        return max(ans, last);
    }
};
