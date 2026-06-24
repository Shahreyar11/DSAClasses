/**
 * Definition for singly-linked list.  */

#include<bits/stdc++.h>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    int count = 0;
    void countList(ListNode* head){
        ListNode* t = head;
        while(t != NULL){
            count++;
            t = t->next;
        }
        return;
    }
    ListNode* middleNode(ListNode* head) {
        countList(head);
        int mid = (count/2) + 1;
        ListNode* t = head;
        for(int i = 1; i<mid; i++){
            t = t->next;
        }
        return t;
    }
};