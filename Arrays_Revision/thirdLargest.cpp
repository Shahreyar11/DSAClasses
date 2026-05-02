#include<bits/stdc++.h>
using namespace std;



int thirdLargest(vector<int>& arr) {
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int x : arr) {
        if (x > first) {
            third = second;
            second = first;
            first = x;
        }
        else if (x > second && x != first) {
            third = second;
            second = x;
        }
        else if (x > third && x != second && x != first) {
            third = x;
        }
    }

    return third;
}