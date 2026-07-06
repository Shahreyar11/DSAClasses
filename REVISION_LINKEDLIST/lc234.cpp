/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* t = head;
        while(t != NULL){
            int temp = t->val;
            arr.push_back(temp);
            t = t->next;
        }
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low < high){
            if(arr[low] != arr[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};