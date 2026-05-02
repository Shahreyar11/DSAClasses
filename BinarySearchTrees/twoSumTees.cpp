#include<bits/stdc++.h>
using namespace std;

vector<int> tmp;
void fun(Node* root){
    if(root == NULL) return;
    // Now we have to do InOrder Traversal

    fun(root->left);
    tmp.push_back(root->data);
    fun(root->right);
    return;
}

vector<int> twoSum(vector<int> &tmp, int tar){
    int n = tmp.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(tmp[i] + tmp[j] == tar){
            return {i,j};
        }
        else if(tmp[i] + tmp[j] > tar){
            j--;
        }
        else{
            i++;
        }
    }
    return{};
}