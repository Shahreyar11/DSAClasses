#include<bits/stdc++.h>
using namespace std;

vector<int> func(vector<int> a, vector<int> b){
    int n = a.size();
    int m = b.size();
    vector<int> res(m+n);
    int i = 0;
    int j = 0;
    int idx =0;
    while(i<n and j<m){
        if(a[i]<a[j]){
            res[idx] = a[i];
            idx++;
            i++;
        }
        else{
            res[idx] = b[j];
            idx++;
            j++;
        }
    }
    //case 1: If array a got finished before array b
    while(j<m){
        res[idx] = b[j];
        idx++;
        j++;
    }
    //case 2: If array b got finished before array a
    while(i<n){
        res[idx] = a[i];
        idx++;
        i++;
    }

}