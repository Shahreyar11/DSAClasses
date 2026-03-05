#include<bits/stdc++.h>
using namespace std;

vector<int> revFunc(vector<int> arr){
    int n = arr.size();
    int i = 0;
    int j = n-1;
    while(i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    return arr;
}

vector<int> revArr(vector<int> arr){
    int n = arr.size();
    vector<int> rev(n);
    int i, j; j=0;
    for(i=n-1; i>=0; i--){
        rev[j] = arr[i];
        j++;
    }
    return rev;

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
    vector<int> newarr = revArr(arr);
    for(int i = 0; i<n; i++){
        cout << newarr[i] << " ";
    }
    cout << endl;
    vector<int> newarr2 = revFunc(arr);
        for(int i = 0; i<n; i++){
        cout << newarr2[i] << " ";
    }
    cout << endl;
    return 0;
}