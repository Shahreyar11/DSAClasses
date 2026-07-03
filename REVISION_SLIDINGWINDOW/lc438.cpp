#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int n = p.size();
        int m = s.size();

        if (n > m) return res;

        int low = 0;
        int high = n;

        unordered_map<char, int> curr;
        unordered_map<char, int> need;

        // Frequency of pattern
        for (int i = 0; i < n; i++) {
            need[p[i]]++;
        }

        // Build first window
        for (int i = 0; i < n; i++) {
            curr[s[i]]++;
        }

        // Check first window
        if (curr == need)
            res.push_back(low);

        // Slide the window
        while (high < m) {
            // Remove left character
            curr[s[low]]--;
            if (curr[s[low]] == 0)
                curr.erase(s[low]);

            low++;

            // Add new right character
            curr[s[high]]++;
            high++;

            // Compare maps
            if (curr == need)
                res.push_back(low);
        }

        return res;
    }
};



// we are checking like this
// vector<int> a = {1, 2, 3};
// vector<int> b = {1, 2, 3};
// vector<int> c = {1, 2, 4};

// cout << (a == b); // 1 (true)
// cout << (a == c); // 0 (false)


// optimal one 
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;

        int n = p.size();
        int m = s.size();

        if (n > m) return res;

        vector<int> need(26, 0);
        vector<int> curr(26, 0);

        for (int i = 0; i < n; i++) {
            need[p[i] - 'a']++;
            curr[s[i] - 'a']++;
        }
        if (need == curr)
            res.push_back(0);

        int low = 0;
        int high = n;
        while (high < m) {
            curr[s[low] - 'a']--;   
            low++;

            curr[s[high] - 'a']++;  
            high++;

            if (need == curr)
                res.push_back(low);
        }

        return res;
    }
};