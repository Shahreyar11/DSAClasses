#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &s, int low, int high){
    int length = high - low + 1;
    if(len == 1 or len == 0){
        return true;
    }
    if(s[low] != s[high]){
        return false;
    }
    return palindrome(s, low+1, high-1);

}