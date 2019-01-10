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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL)
            return NULL;
        set<ListNode *> s;
        while(headA!=NULL)
        {
            s.insert(headA);
            headA = headA->next;
        }
        while(headB!=NULL)
        {
            if(s.count(headB))
                return headB;
            else
                headB = headB->next;
        }
        return NULL;
    }
};
