#include <bits/stdc++.h>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i) {

    // Base Case
    if (i == arr.size()) {

        // Print current subset
        if (ans.empty()) {
            cout << "{}";
        } else {
            for (int x : ans)
                cout << x << " ";
        }

        cout << endl;
        return;
    }

    // ---------------- INCLUDE ----------------
    ans.push_back(arr[i]);             // Take current element
    printSubsets(arr, ans, i + 1);     // Solve for remaining elements

    // ---------------- BACKTRACK ----------------
    ans.pop_back();                    // Undo the previous choice

    // ---------------- EXCLUDE ----------------
    printSubsets(arr, ans, i + 1);     // Skip current element
}

int main() {

    vector<int> arr = {1, 2, 3};
    vector<int> ans;

    printSubsets(arr, ans, 0);

    return 0;
}