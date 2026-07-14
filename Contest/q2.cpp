// # Q1. Number of Elapsed Seconds Between Two Times
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    int convert(string time) {
        int hour = (time[0] - '0') * 10 + (time[1] - '0');
        int minute = (time[3] - '0') * 10 + (time[4] - '0');
        int second = (time[6] - '0') * 10 + (time[7] - '0');

        return hour * 3600 + minute * 60 + second;
    }    
    int secondsBetweenTimes(string startTime, string endTime) {
        return(convert(endTime) - convert(startTime));
    }
};

int convert(string time) {
    int h = stoi(time.substr(0, 2));  // converting to int
    int m = stoi(time.substr(3, 2));
    int s = stoi(time.substr(6, 2));

    return h * 3600 + m * 60 + s;
}