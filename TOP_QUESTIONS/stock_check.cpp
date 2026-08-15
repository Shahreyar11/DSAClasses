#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> &arr, int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        int have = arr[i][0];
        int need = arr[i][1];
        if(have < need){
            count++;
        }
    }
    return count;

}

int main(){
    int n;
    cout << "Enter the number of arrays: ";
    cin >> n;
    vector<vector<int>> arr(n, vector<int> (2,0));
    cout << "Enter the elements" << endl;
    for(int i =0; i<n; i++){
        for(int j = 0; j<2; j++){
            cin >> arr[i][j];
        }
    }
    int res = solve(arr,n);
    if(res == 0){
        cout << -1 << endl;;
    }
    cout << res << endl;

}