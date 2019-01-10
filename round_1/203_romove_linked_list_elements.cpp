/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        while(head!=NULL&&head->val == val)
            head = head->next;
        if(head == NULL)
            return head;
        ListNode *p = head, *q = head->next;
        while(p!=NULL&&q!=NULL)
        {
            if(q->val == val)
            {
                p->next = q->next;
                q = p->next;
            }
            else
            {
                p = p->next;
                q = q->next;
            }
        }
        return head;
    }
};
