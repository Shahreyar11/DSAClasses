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

void printList(Node* head){
    Node* t = head;
    while(t!= NULL){
        cout << t << endl;   // to print the address of each node
        cout << t->data << "-->";  // to print the data
        t = t->next;
    }
    cout << endl;
    return;
}

int main(){
    Node* head = new Node(10);
    cout << "Value of node is " << head->data << endl;
    Node* last = head;

    vector<int> input={20,30,40,50};
    int n = input.size();

    for(int i=0; i<n; i++){
        int d = input[i];
        Node* temp = new Node(d);

        last->next = temp;
        last = temp;
    }
    printList(head);
}


// INSERT IN MIDDLE POSITION ANY NEW ELEMENT IN A LINKED LIST 
// WE CREATE A VARIABLE NAMED POS after which we have to insert the element which is temp
// Now say temp is [50, NULL] as a LinkedList 

//THIS BELOW CODE WILL INSERT IN THE MIDDLE AS WELL AS KEEP THE LL Connected

// temp->next = pos->next;
// pos->next = temp
