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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * res= new ListNode();
        ListNode * head= res;
        while(list1 !=NULL && list2!= NULL){
            if(list1->val<= list2->val){
                res->val=list1->val;
                list1= list1->next;
            }
            else{
                res->val = list2->val;
                list2= list2->next;
            }
            res ->next= new ListNode();
            res= res->next;
        }
        if(list1 ==NULL && list2==NULL){
            return NULL;
        }
        while(list1!= NULL){
            res->val= list1->val;
            list1= list1->next;
            if(list1!=NULL){
                res->next=new ListNode();
                res=res->next;
            }
        }
        while(list2!= NULL){
            res->val= list2->val;
            list2= list2->next;
            if(list2!=NULL){
                res->next=new ListNode();
                res=res->next;
            }
        }
        return head;
    }
};