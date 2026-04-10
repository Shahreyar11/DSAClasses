// SUM OF DIGITS

#include<bits/stdc++.h>
using namespace std;

int fun(int n){  //687
    if(n==0){
        return 0;
    }
    int d = n % 10;  // 7 remove karke dedega
    n = n / 10;  // 7 remove hojayega from n 
    int ans = fun(n);  // 68 fun(68)  
    return d + ans; // 7 + 8 + 6   // 7 + 68 + 687 
}