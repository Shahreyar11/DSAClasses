#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        cout << "Creating node with data= " << d << endl;
        data = d;
        next = NULL;
    }
};

Node* reverseLinkedList(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}