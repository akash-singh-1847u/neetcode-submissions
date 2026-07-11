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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int c=1;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* prv=dummy;
        while(c<left){
            prv=prv->next;
            c++;
        }
        ListNode* curr=prv->next;
        ListNode* nxt=nullptr;
        for(int i=0;i<right-left;i++){
            nxt=curr->next;
            curr->next=nxt->next;
            nxt->next=prv->next;
            prv->next=nxt;
        }
        return dummy->next
    }
};