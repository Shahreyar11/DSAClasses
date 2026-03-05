#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n==1){
        return 1;
    }
    int ans = fun(n-1);
    return ans = ans + n;
}

int main(){
    int n = 4;
    int ans = fun(4);
    cout << ans << endl;
    return 0;
}