#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int calAvg(vector<int> arr){
    int n = arr.size();
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum/n;
}

int main(){
    vector<int> arr(5);
    cout << "Enter the array elements" << endl;
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    int average;
    average = calAvg(arr);
    cout << average;
    return 0;
}