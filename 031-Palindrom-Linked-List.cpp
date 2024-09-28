// https://leetcode.com/problems/palindrome-linked-list/
class Solution {
public:
    ListNode* rev(ListNode* head){
        if(head == NULL || head->next == NULL)  return head;
        ListNode* newHead = rev(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next=NULL;
        return newHead;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* s = head, *f = head;
        while(f != NULL && f->next != NULL){
            s=s->next;
            f=f->next->next;
        }
        ListNode* newHead = rev(s);
        ListNode* h1 = head, *h2 = newHead;
        while(h2 != NULL){
            if(h1->val != h2->val){
                return false;
            }
            h1 = h1->next;
            h2 = h2->next;
        }
        return true;
    }
};
