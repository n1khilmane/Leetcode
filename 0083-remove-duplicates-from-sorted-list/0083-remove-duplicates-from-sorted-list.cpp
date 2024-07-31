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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(slow!=NULL)
        {
            while(fast!=NULL && slow->val == fast->val)
                fast = fast->next;
            
            slow->next = fast;
            slow = slow->next;
        }
        
        return head;
        
    }
};