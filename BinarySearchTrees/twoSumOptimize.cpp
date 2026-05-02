#include<bits/stdc++.h>
using namespace std;;

stack<Node*> asc;

void mainFun(Node* root){
    Node* t = root;
    while(t){
        asc.push(t);
        t=t->left;
    }
    while(!asc.empty()){
        Node* small = asc.top();
        asc.pop();
        Node* rightChild = small->right;
        while(rightChild){
            asc.push(rightChild);
            rightChild = rightChild->left;
        }
    }
}