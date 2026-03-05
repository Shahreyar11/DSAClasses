#include<bits/stdc++.h>
using namespace std;

// Counting frequencies of number 0-9
vector<int> countFreq(vector<int> arr){
    int n = arr.size();
    vector<int> ground(10,0);
    for(int i =0; i<n; i++){
        int num = arr[i];
        ground[num]++;
    }
    return ground;
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
    vector<int> newarr = countFreq(arr);
    for(int i = 0; i<10; i++){
        cout << i << "->" << newarr[i] << endl;;
    }
}