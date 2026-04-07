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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        for(int i=0;i<lists.size();i++){
            ListNode * curr = lists[i];
            while(curr!=NULL){
                v.push_back(curr->val);
                curr=curr->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode * dummy= new ListNode();
        ListNode * res= dummy;
        for(int i=0;i<v.size();i++){
            res->next= new ListNode(v[i]);
            res=res->next;
        }
        return dummy->next;
    }
};