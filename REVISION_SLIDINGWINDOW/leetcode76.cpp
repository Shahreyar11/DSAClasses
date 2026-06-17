#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool valid(vector<int>& need, vector<int>& have) {
        for(int i = 0; i < 256; i++) {
            if(have[i] < need[i]) {
                return false;
            }
        }
        return true;
    }

    string minWindow(string s, string t) {

        vector<int> need(256, 0);
        vector<int> have(256, 0);

        for(char ch : t) {
            need[ch]++;
        }

        int low = 0;
        int minLen = INT_MAX;
        int start = -1;

        for(int high = 0; high < s.size(); high++) {

            have[s[high]]++;

            while(valid(need, have)) {

                int len = high - low + 1;

                if(len < minLen) {
                    minLen = len;
                    start = low;
                }

                have[s[low]]--;
                low++;
            }
        }

        if(start == -1)
            return "";

        return s.substr(start, minLen);
    }
};