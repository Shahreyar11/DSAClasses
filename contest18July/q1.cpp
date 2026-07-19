class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        // string t = "";
        vector<int> have(26,0);
        int n = s.size();
        for(int i = 0; i<n; i++){
            have[(s[i] - 'a')]++;
        }
        if(have[(x-'a')] == 0 || have[(y-'a')] == 0){
            return s;
        }
        int low = 0;
        int high = n-1;
        while(low <= high){
            if(s[low] == x && s[high] == y){
                swap(s[low], s[high]);
            }
            else if(s[low] == x && s[high] != y){
                high--;
            }
            else{
                low++;
            }
        }
        return s;
    }
};