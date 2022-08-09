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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* previous = NULL, *next_node;
        
        while(head!=NULL)
        {
            
            next_node = head->next;
            head->next = previous;
            previous = head;
            head = next_node;
            
        }
        
        return previous;
        
    }
};