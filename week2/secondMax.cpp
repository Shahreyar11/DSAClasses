#include<bits/stdc++.h>
using namespace std;

int secondMax(vector<int> arr){
    int n = arr.size();
    int largest = -1;
    int sec_larg = -1;
    for(int i = 0; i<n; i++){
        if(arr[i]< largest and arr[i] < sec_larg){
            continue;
        }
        else if(arr[i]< largest and arr[i] > sec_larg){
            sec_larg = arr[i];
        }
        else if(arr[i] == largest){
            continue;
        }
        else if(arr[i] > largest and arr[i] > sec_larg){
            sec_larg = largest;
            largest = arr[i];
        }
    }
    return sec_larg;
}

void secMax(vector<int> arr){
    int n = arr.size();
    int max = -1;
    int sec_max = -1;  // We keep this -1 as either it will print same as largest in case of 10 5 10
    for(int i = 0; i< n; i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    int larg = max;
    for(int i = 0; i<n; i++){
        if(arr[i] > sec_max and arr[i] < larg){
            sec_max = arr[i];
        }
    }
    cout << "Second Max is  " << sec_max << endl;
    cout << "Max is "<< larg << endl;
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
    int second_max = secondMax(arr);
    cout << "From First Function Second Max is:  " << second_max << endl;
    secMax(arr);
    return 0;

}

// SECOND LARGEST GFG Question 
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int max = -1;
        int sec_max = -1;
        for(int i = 0; i<n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i] > sec_max and arr[i] < max){
                sec_max = arr[i];
            }
        }
        return sec_max;
    }
};