#include<bits/stdc++.h>
using namespace std;


// inorder traversal -- First we will give to the left then to root or parent then to right
void inOrder(Node* root){
    fun(root);
}
void fun(Node* Node){
    if(Node == NULL){
        return;
    }
    fun(Node->left);
    cout << Node->data;
    fun(Node->right);
    return;
}