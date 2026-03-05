#include<bits/stdc++.h>

using namespace std;

bool compareHalfs(vector<int> arr){
    int n = arr.size();
    int sum1=0, sum2 = 0;
    int i =0; 
    int j = n-1;
    while(i<j){
        sum1 = sum1 + arr[i];
        sum2 = sum2 + arr[j];
        i++;
        j--;
    }
    if(sum1 == sum2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<< "Enter the size of array"<< endl;
    cin >> n;
    vector<int> arr(n);
    cout<< "Enter the Elements of array"<< endl;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << endl;
    cout << compareHalfs(arr) << endl;
}