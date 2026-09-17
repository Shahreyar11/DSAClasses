#include <iostream>
#include <vector>
using namespace std;

void mergeArrays(vector<int>& L1, vector<int>& L2) {

    int n1 = L1.size();
    int n2 = L2.size();

    // Number of actual elements in L1
    int m = n1 - n2;

    int i = m - 1;       
    int j = n2 - 1;         
    int k = n1 - 1;         

    while (j >= 0) {

        if (i >= 0 && L1[i] > L2[j]) {
            L1[k] = L1[i];
            i--;
        }
        else {
            L1[k] = L2[j];
            j--;
        }

        k--;
    }
}

int main() {

    vector<int> L1 = {1, 3, 4, 0, 0, 0, 0};
    vector<int> L2 = {1, 4, 5, 7};

    mergeArrays(L1, L2);

    for (int x : L1) {
        cout << x << " ";
    }

    return 0;
}