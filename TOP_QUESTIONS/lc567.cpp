class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n1 = s1.size();
        int n2 = s2.size();

        if(n1 > n2)
            return false;

        vector<int> f1(26, 0);
        vector<int> f2(26, 0);

        // First window
        for(int i = 0; i < n1; i++){
            f1[s1[i] - 'a']++;
            f2[s2[i] - 'a']++;
        }

        int low = 0;

        // Slide the window
        for(int high = n1; high < n2; high++){

            // Check current window
            if(f1 == f2)
                return true;

            // Remove leftmost character
            f2[s2[low] - 'a']--;

            // Move left
            low++;

            // Add new character
            f2[s2[high] - 'a']++;
        }

        // Check last window
        if(f1 == f2)
            return true;

        return false;
    }
};