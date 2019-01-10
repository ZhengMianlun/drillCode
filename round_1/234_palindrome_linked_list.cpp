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
    bool isPalindrome(ListNode* head) {
        if(head == NULL)
            return true;
        ListNode *slow = head, *fast = head;
        ListNode *pre = NULL;
        while(fast && fast->next)
        {
            if(!pre)
                pre = new ListNode(slow->val);
            else
            {
                ListNode *temp = new ListNode(slow->val);
                temp->next = pre;
                pre = temp;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast)
            slow = slow->next;
        while(pre&&pre->val == slow->val)
        {
            slow = slow->next;
            pre = pre->next;
        }
        
        return !pre;
    }
};
