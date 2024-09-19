// https://leetcode.com/problems/middle-of-the-linked-list

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* s = head;
        ListNode* f = head;
        while(f != NULL && f->next != NULL){
            f = f->next->next;
            s = s->next; 
        }
        return s;
    }
};
