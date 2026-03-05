// It works in array or subarray only 

// for prefix sum we have to do 
// prefix[i] = prefix[i-1] + arr[i-1]


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> prefix(x, 0);
    for(int i = 1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i-1];

    }
    return prefix;

    // Similarly for SUFFIX
    suffix[i] = arr[i+1] + suffix[i+1];
}