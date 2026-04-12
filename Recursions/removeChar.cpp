#include<bits/stdc++.h>
using namespace std;

string fun(string &s, int n, int i, char c){
    if(i == n){ // 0 length string
        return "";
    }
    string ans = fun(s,n,i+1,c);
    if(s[i] == c){
        return ans;
    }
    return s[i] + ans;
}   