#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        ListNode* curr = head;  // curr pointer stores head
        ListNode* prev = NULL;  // prev stores NULL value
        while( curr != NULL){
            ListNode* temp = curr->next;    // temp stores curr of next to be reversed   // node(2)
            curr->next = prev;  // prev stores currents values next address     // node(1)->next = NULL
            prev = curr;  // prev stores current value   // node(1)->next = NULL
            curr = temp;  // current stores temp value   // node(1)->next = NULL
        }
        return prev;
    }
};