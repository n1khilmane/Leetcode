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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return NULL;
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;

        ListNode* dummy= new ListNode(-1);
        ListNode* temp=dummy;
        for(int i=0;i<lists.size();i++){
            if(lists[i])
            pq.push({lists[i]->val,lists[i]});
        }
        while(!pq.empty()){
            ListNode* front=pq.top().second;
            pq.pop();
            temp->next=front;
            temp=temp->next;
            if(front->next){
                pq.push({front->next->val,front->next});
            }
        }
        return dummy->next;
    }
};