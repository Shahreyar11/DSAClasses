#include<bits/stdc++.h>
using namespace std;

// We have find maximum number index in an array


int maxIndex(vector<int> arr){
    int n = arr.size();
    int maxi = 0;
    for(int i =1; i<n; i++){
        if(arr[i] > arr[maxi]){
            maxi = i;
        }
    }
    return maxi;
    
}

int main(){
    vector<int> arr;
    arr = {12, 15, 28, 2, 4};

    cout << maxIndex(arr);
    return 0;
}