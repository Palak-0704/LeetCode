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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode * node= head;
        stack<int> st;
        for(int i=1;i <= left-1;i++){
            node=node->next;
        }
        ListNode * temp=node;
        int i=1;
        while(i <right && temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
            i++;
        }
        while(!st.empty()){
            node->val = st.top();
            st.pop();
            node= node->next;
        }
/*         while(temp!=NULL){
            node->val=temp->val;
            node= node->next;
            temp=temp->next;
        } */
        return head;
    }
};