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

bool fun(Node* head){
    if(head == NULL) return false;
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL and fast->next!=NULL){  // we checked fast->next is NULL or not as in further loop
        // we checked for fast->next->next and if fast->next is NULL the program will crash cause NULL->next is nothing 

        slow->next;
        fast= fast->next->next;
        if(slow==fast){  // both pointers met, So cycle exist
            return true;
        }
    }
    return false;
}

// DELETION OF A LINKED LIST
//  GIVEN NUM = 3 AND PREV = 200

// below is the function for that : 
// prev->next = num->next
// free(num)

// Now if head is going to be deleted

Node* fun(Node* head, int num){
    if(head == NULL){
        return NULL;
    }
    if(head->data == num){
        Node* t = head;
        head = head->next;
        free(t);
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL){
        if(curr->data == num){
            prev->next = curr->next;
            free(curr);
            break;
        }
        prev = curr; // curr ko previous me store karo aur NULL se hatao
        curr = curr->next;  // curr ko aage badhao
    }
    return head;    
}

