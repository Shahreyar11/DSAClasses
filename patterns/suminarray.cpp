#include<bits/stdc++.h>
using namespace std;

void sumInArray(vector<int> arr, int target){
    int n = arr.size();

    unordered_map<int,int> availability_array;
    for(int i = 0; i<n; i++){
        int key = arr[i];
        availability_array[key]++;
    }
    for(int i=0; i<n; i++){
        int num = arr[i];
        int required = target - num;
        if(availability_array.find(required)!= availability_array.end()){
            cout << "Number is " << num << "Required is "<< required << endl;
            break;
        }
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
    sumInArray(arr, 9); 
    return 0;
}