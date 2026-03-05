#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> f;
    f[1]++;
    f[2]++;
    f[3]++;
    f[6]++;
    int val = f[2];
    cout << val << endl;
    if(f.find(5) == f.end()){
        cout << "nahi Mila" << endl;
    }
    else if(f.find(5) != f.end()){
        cout << "Mil GAya" << endl;
    }

    return 0;
}