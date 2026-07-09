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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* cur=slow->next;
        ListNode* prev=nullptr;
        slow->next=nullptr;
        while(cur){
            ListNode* nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        ListNode* first=head;
        ListNode* sec=prev;
        while(sec){
            ListNode* temp1=first->next;
            ListNode* temp2=sec->next;
            first->next=sec;
            sec->next=temp1;
            first=temp1;
            sec=temp2;
        }
    }
};
