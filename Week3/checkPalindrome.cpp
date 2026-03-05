#include<bits/stdc++.h>
using namespace std;

int checkPal(int n){
    int orig_num = n;
    int rev = 0;
    while(n>0){
        int dig = n % 10;
        rev = rev*10 + dig;
        n = n/10;
    }
    if(rev == orig_num){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n = 1222;
    cout << checkPal(n);
    return 0;
}