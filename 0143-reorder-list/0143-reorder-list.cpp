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
        ListNode * node=head;
        /* int n=0;
        ListNode * dummy=new ListNode(); */
        while(node !=NULL && node->next!=NULL){
            ListNode * dummy=new ListNode();
            ListNode * temp=head;
            ListNode * prev =NULL;
            while(temp->next!=NULL){
                prev=temp;
                temp=temp->next;
            }
            prev->next=NULL;
            dummy->val=temp->val;
            dummy->next=node->next;
            node->next=dummy;
            node=dummy->next;
            delete(temp);
        }





        /* for(int i=0;i<n;i=i+2){
            node=node->next;
            ListNode * dummy=head;
            for(int j=n-1;j>0;j--){
                dummy=dummy->next;
            }
            int x= node->val;
            node->val = dummy->val;
            node=node->next;
            node->val=x; */
    }
};