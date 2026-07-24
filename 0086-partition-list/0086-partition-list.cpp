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
    ListNode* partition(ListNode* head, int x) {
        vector<int>v;
        vector<int>v2;
        ListNode * temp= head;
        while(temp!=NULL){
            if(temp->val<x){
                v.push_back(temp->val);
                temp=temp->next;
            }
            else{
                v2.push_back(temp->val);
                temp=temp->next;
            }
        }
        temp= head;
        for(int i=0;i<v.size();i++){
            temp->val=v[i];
            temp=temp->next;
        }
        for(int j=0;j<v2.size();j++){
            temp->val=v2[j];
            temp=temp->next;
        }
        return head;
    }
};