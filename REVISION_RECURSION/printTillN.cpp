#include<bits/stdc++.h>
using namespace std;

void printTillN(int n){
    if(n == 1){
        cout << 1 <<" ";
        return;
    }
    printTillN(n-1);
    cout << n << " ";
}

int main(){
    int n;
    cin >> n;
    printTillN(n);
    return 0;
}