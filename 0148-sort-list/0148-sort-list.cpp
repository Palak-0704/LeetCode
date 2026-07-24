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
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        /* ListNode * slow=head;
        ListNode * fast= head->next;
        while(slow!=NULL){
            while(fast!=NULL){
                if(slow->val>fast->val){
                    swap(slow->val,fast->val);
                    fast=fast->next;
                }
                else{
                    fast=fast->next;
                }
            }
            slow=slow->next;
            if(slow!=NULL){
                fast=slow->next;
            }
        }
        return head; */
        ListNode* temp=head;
        vector<int>list;
        while(temp!=NULL){
            list.push_back(temp->val);
            temp=temp->next;
        }

        sort(list.begin(),list.end());
        temp=head;
        for(int i=0;i<list.size();i++){
            temp->val=list[i];
            temp=temp->next;
        }
        return head;
    }
};