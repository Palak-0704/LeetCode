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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * dummy= new ListNode();
        dummy->next=head;
        ListNode * node= head;
        ListNode * prev= dummy;

        while(node!=NULL){
            if(node->next!=NULL && node->val==node->next->val){
                while(node->next!=NULL && node->val==node->next->val){
                    node=node->next;
                }
                prev->next=node->next;
            }
            else{
                prev= node;
            }
            node=node->next;
        }
        return dummy->next;
    }
};