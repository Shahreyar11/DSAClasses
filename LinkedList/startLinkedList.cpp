#include<bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL and fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){  // cycle exists
                slow = head;  // slow again move to starting point and fast remains on meeting point
                // THE Maths is slow and fast will move at the start of cycle , thats the math, logic.
                while(true){
                    if(slow == fast){
                        return slow;
                    }
                    slow = slow->next;
                    fast = fast->next;
                }
            }
        }
        return NULL;
    }
};