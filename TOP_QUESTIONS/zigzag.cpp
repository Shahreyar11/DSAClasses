#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        vector<string> rows(numRows);
        string res ="";
        int idx = 0;
        int dir = 1;
        for (char ch : s) {

            rows[idx].push_back(ch);

            if (idx == numRows - 1)
                dir = -1;

            else if (idx == 0)
                dir = 1;

            idx += dir;
        }
        for(int i = 0; i<numRows; i++){
            res += rows[i];
        }
        return res;
    }
};