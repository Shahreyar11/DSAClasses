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

Node* deleteAllOccurrences(Node* head, int num){
    if(head == NULL){
        return NULL;
        Node* newhead = NULL;
        while(head != NULL and head->data == num){
            Node* t = head->next;
            head = head->next;
            free(t);
        }
        if(head == NULL){
            return NULL;
        }
        newhead = head;

        Node* curr = newhead;
        Node* prev = NULL;
        while(curr){
            if(curr->data == num){
                prev->next = curr->next;
                Node* nex = curr->next;
                free(curr);
                curr = nex;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return newhead;
    }
}