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
        auto cmp = [](ListNode* a, ListNode* b) {
            return a->val > b->val;
        };
        priority_queue<ListNode*,vector<ListNode*>,decltype(cmp)> pq(cmp);
        for(auto it:lists){
            if(it)
            pq.push(it);
        }
        ListNode* ok=nullptr;
        ListNode* ok1=nullptr;
        while(!pq.empty()){
            ListNode* curr=pq.top();
            pq.pop();
            if(!ok){
                ok=curr;
                ok1=ok;
            }
            else{
                ok->next=curr;
                ok=curr;
            }
            if(curr->next) pq.push(curr->next);
        }
        return ok1;
    }
};