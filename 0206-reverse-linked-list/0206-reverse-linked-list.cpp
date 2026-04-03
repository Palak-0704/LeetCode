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
    ListNode* reverseList(ListNode* head) {
        ListNode * ans=head;
        stack<int> st;
        ListNode * temp=head;
        while(temp !=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        while(!st.empty()){
            ans->val=st.top();
            st.pop();
            ans= ans->next;
        }
        return head;
    }
};