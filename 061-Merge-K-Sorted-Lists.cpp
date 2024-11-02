// https://leetcode.com/problems/merge-k-sorted-lists/
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(ListNode* list : lists){
            while(list != nullptr){
                pq.push(list->val);
                list = list->next;
            }
        }

        ListNode dummy;
        ListNode* tail = &dummy;

        while(!pq.empty()){
            tail->next = new ListNode(pq.top());
            pq.pop();
            tail = tail->next;
        }
        return dummy.next;
        
    }
};
