/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * tempB = headB;
        while(headA!=NULL){
            headB= tempB;
            while(headB!=NULL){
                if(headA == headB){
                    return headA;
                }
                headB= headB->next;
            }
            headA= headA->next;
        }
        return NULL;
    }
};