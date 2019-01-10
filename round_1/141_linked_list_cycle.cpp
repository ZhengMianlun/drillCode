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
  bool hasCycle(ListNode *head) {
    set<ListNode *> s;
    while (head && ! s.count(head)) 
    {
      s.insert(head);
      head = head->next;
    }
    return !!head;
  }
};
