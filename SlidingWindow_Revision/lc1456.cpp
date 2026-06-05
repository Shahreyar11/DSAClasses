// What I tried
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int res = 0;
        int count = 0;
        string ss = "";
        for(int i = 0; i<k; i++){
            ss += s[i];
            if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u'){
                count++;
            }
        }
        for(int i = k; i < n; i++){
            if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u'){
                count++;
            }
            else if((s[i-k] == 'a' or s[i-k] == 'e' or s[i-k] == 'i' or s[i-k] == 'o' or s[i-k] == 'u') and (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')){
                count = count;
            }
            ss += s[i];
            ss -= s[i-k];
            res = max(res, count);
        }
        return res;
    }
};

// What solution I got
class Solution {
public:

    bool isVowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    int maxVowels(string s, int k) {

        int count = 0;

        for(int i=0;i<k;i++){
            if(isVowel(s[i]))
                count++;
        }

        int res = count;

        for(int i=k;i<s.length();i++){

            if(isVowel(s[i]))
                count++;

            if(isVowel(s[i-k]))
                count--;

            res = max(res,count);
        }

        return res;
    }
};