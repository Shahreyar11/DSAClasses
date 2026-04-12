// VALID PARANTHESIS

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// FOR n = 3  WE NEED 3 "(" AND 3 ")"


// void fun(int open, int close, int n, string &tmp, vector<string> &res){
//     if(open == n and close == n){
//         res.push_back(tmp);
//         return;
//     }
//     if(open < n){
//         tmp.push_back('(');
//         fun(open +1, close, n, tmp, res);
//         tmp.pop_back(); // Backtrack
//     }
//     if(close < open){
//         tmp.push_back(')');
//         fun(open, close + 1, n, tmp, res);
//         tmp.pop_back(); // Backtrack
//     }  
//     return;  
// }

#include <bits/stdc++.h>
using namespace std;

void fun(int open, int close, int n, string &tmp, vector<string> &res){
    
    // Base case
    if(open == n && close == n){
        res.push_back(tmp);
        return;
    }

    // Try adding '('
    if(open < n){
        tmp.push_back('(');              // DO
        fun(open + 1, close, n, tmp, res);
        tmp.pop_back();                 // UNDO (Backtrack)
    }

    // Try adding ')'
    if(close < open){
        tmp.push_back(')');             // DO
        fun(open, close + 1, n, tmp, res);
        tmp.pop_back();                 // UNDO (Backtrack)
    }
}

int main(){
    int n = 3;
    vector<string> res;
    string tmp = "";

    fun(0, 0, n, tmp, res);

    for(auto s : res){
        cout << s << endl;
    }
}