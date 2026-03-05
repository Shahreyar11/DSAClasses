// Print YES if an element X is present. Otherwise print NO.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool response(vector<int> a, int x){
    int n = a.size();
    for(int i =0; i<n; i++){
        if(a[i] == x){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> a(5);
    cout << "Enter the array elements" << endl;
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    int x;
    cout << "Enter the element to be searched in the array" << endl;
    cin >> x;
    bool ans;
    ans = response(a, x);
    if(ans == 1){
        cout << "YES!" << endl;
    }
    else{
        cout << "NO!";
    }

    return 0;
}