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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        ListNode * node=head;
        ListNode * temp=head;
        int n=0;
        while(node!=NULL){
            node=node->next;
            n++;
        }
        int mid=n/2;
        int i=0;
        while(temp!=NULL){
            if(i==mid-1){
                if(temp->next != NULL){
                    temp->next = temp->next->next;
                }
                break;
            }
            i++;
            temp=temp->next;
        }
        return head;
    }
};