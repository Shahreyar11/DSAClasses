#include<bits/stdc++.h>
using namespace std;



int main(){
    return 0;
}


// LEETCODE QUESTION 344

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i=0;
        int j = n-1;
        while(i<=j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};