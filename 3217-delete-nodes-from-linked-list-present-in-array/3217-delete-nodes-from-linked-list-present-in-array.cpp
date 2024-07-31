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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        set<int> st;
        
        for(auto v:nums)
        {
            st.insert(v);
        }
        
        ListNode* dummy = new ListNode(-1,head);
        ListNode* newhead = dummy;
        ListNode* curr = newhead;
        
        while(curr->next!=NULL)
        {
            if(st.find(curr->next->val) != st.end())
            {
                curr->next = curr->next->next;
                
            }
            else{
            curr = curr->next;
            }
        }
        
        return dummy->next;
    }
};