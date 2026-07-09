/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* cur=head;
        while(cur){
            Node* copy=new Node(cur->val);
            copy->next=cur->next;
            cur->next=copy;
            cur=cur->next->next;
        }
        cur=head;
        while(cur){
            if(cur->random){
                cur->next->random=cur->random->next;
            }
            cur=cur->next->next;
        }
        Node* dummy=new Node(-1);
        Node* temp=dummy;
        cur=head;
        while(cur){
            Node* copy=cur->next;
            temp->next=copy;
            cur->next=copy->next;
            copy->next=cur->next;
            temp=temp->next;
            cur=cur->next;
        }
        return dummy->next;
    }
};
