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
    ListNode* merge(ListNode* a,ListNode* b){
        ListNode dummy(0);
        ListNode* temp=&dummy;
        while(a && b){
            if(a->val<=b->val){
                temp->next=a;
                a=a->next;
            }
            else{
                temp->next=b;
                b=b->next;
            }
            temp=temp->next;
        }
        if(a){
            temp->next=a;
        }
        else{
            temp->next=b;
        }
        return dummy.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){
            return nullptr;
        }
        int n=lists.size();
        int interval=1;
        while(interval<n){
            for(int i=0;i+interval<n;i+=2*interval){
                lists[i]=merge(lists[i],lists[i+interval]);
            }
            interval*=2;
        }
        return lists[0];
    }
};
