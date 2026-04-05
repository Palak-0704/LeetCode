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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode * temp=head;
        int size=1;
        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        int end= size-k;
        int start=k;
        ListNode * first=head;
        for(int i=1;i<start;i++){
            first=first->next;
        }

        ListNode * second=head;
        for(int i=1;i<end;i++){
            second=second->next;
        }

        int tempval=first->val;
        first->val=second->val;
        second->val= tempval;
        return head;
    }
};