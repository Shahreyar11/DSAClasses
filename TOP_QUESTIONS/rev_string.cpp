#include<bits/stdc++.h>
using namespace std;
// GFG
// https://www.geeksforgeeks.org/problems/reverse-a-string
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int low = 0;
        int high = s.size() - 1;
        char temp;
        while(low < high){
            temp = s[low];
            s[low] = s[high];
            s[high] = temp;
            low++;
            high--;
        }
        return s;
    }
};
