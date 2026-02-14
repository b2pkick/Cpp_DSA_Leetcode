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
    ListNode* sortList(ListNode* head) {
        auto cmp = [](ListNode* a, ListNode* b) {
            return a->val > b->val;
        };
        priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> pq(cmp);
        if(!head||!head->next) return head;
        while(head){
            pq.push(head);
            head=head->next;
        }
        ListNode* ans=nullptr;
        ListNode* ok=nullptr;
        while(!pq.empty()){
            if(!ok){
                ok=pq.top();
                ans=ok;
            }else{
                ok->next=pq.top();
                ok=ok->next;
            }
            pq.pop();
        }
        ok->next=nullptr;
        return ans;
    }
};