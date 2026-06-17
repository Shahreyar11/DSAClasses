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
            ListNode* temp = curr->next;    // temp stores curr of next to be reversed 
            curr->next = prev;  // prev stores currents values next address 
            prev = curr;  // prev stores current value
            curr = temp;  // current stores temp value
        }
        return prev;
    }
};