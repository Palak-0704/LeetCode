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
    bool hasCycle(ListNode *head) {
       /*  unordered_set<int>st;
        if(head!=NULL){
            st.insert(head->val);
        }
        while(head!= NULL){
            if(st.find(head->val) != st.end()){
                return true;
            }
            st.insert(head->val);
            head= head->next;
        }
        return false; */
        unordered_set<ListNode*>st;
        ListNode * temp= head;
        while(temp !=NULL){
            if(st.find(temp) != st.end()){
                return true;
            }
            st.insert(temp);
            temp=temp->next;
        }
        return false;
    }
};