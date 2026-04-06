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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode * node=head;
        vector<int>v;
        while(node!=NULL){
            ListNode * temp=node->next;
            while(temp!=NULL){
                if(temp->val>node->val){
                    v.push_back(temp->val);
                    break;
                }
                temp=temp->next;
            }
            if(temp==NULL){
                v.push_back(0);
            }
            node=node->next;
        }
        return v;
    }
};