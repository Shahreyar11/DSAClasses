#include<bits/stdc++.h>
using namespace std;

bool fun(vector<int> &arr, int i = 0, int n = 3){
    if(i == n or i == n-1){
        return true;
    }
    if(arr[i] > arr[i+1]){
        return false;
    }
    return fun(arr, i+1, n);
}