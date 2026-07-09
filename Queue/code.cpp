#include<iostream>
#include<vector>

using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;

public:
    Queue(){
        head = tail = NULL;
    }

    void push(int data){
        Node* newNode = new Node(data);

        if(empty()){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop(){
        if(empty()){
            cout << "LL is Empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front(){
        if(empty()){
            cout << "LL is Empty";
            return -1;
        }        
        return head->data;
    }

    bool empty(){
        return head == NULL;
    }
};


int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;

}

// The Complete std::queue Toolset
// q.push(): Adds an element to the back of the queue.
// q.pop(): Removes the element from the front of the queue.
// q.front(): Looks at the oldest element (at the front).
// q.back(): Looks at the newest element (at the back).
// q.empty(): Returns true if the queue has no elements.
// q.size(): Returns the total number of elements currently in the queue.