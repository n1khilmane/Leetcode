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
 
        if(head == NULL)
            return false;
        
        ListNode* ptr1 = head, *ptr2;
        ptr2 = ptr1->next;
        
      
        
        while(ptr1!=ptr2)
        {
            if(ptr2==NULL || ptr2->next==NULL)
                return false;
            ptr1=ptr1->next;
            ptr2=ptr2->next->next;
        }
        return true;
        
    }
};