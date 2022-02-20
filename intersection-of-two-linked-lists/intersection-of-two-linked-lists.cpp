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
        
//         unordered_map<int,ListNode*> mp;
//         ListNode* tempA = headA;
//         ListNode* tempB = headB;
        
//         while(tempA!=NULL)
//         { 
//             mp[tempA->val]=tempA;
//             tempA=tempA->next;
//         }
        
//         while(tempB!=NULL)
//         {
//             if(tempB==mp[tempB->val]){
//                 return tempB;
//                 break;
//             }
//         }
//         return NULL;
        
            set<ListNode*> nodesA;
            while(headA!=NULL)
            {
                nodesA.insert(headA);
                headA=headA->next;
            }
        
            while(headB!=NULL)
            {
                if(nodesA.find(headB)!=nodesA.end()){
                    return headB;
                }
                headB=headB->next;
            }
        return NULL;
        
        
        
    }
};