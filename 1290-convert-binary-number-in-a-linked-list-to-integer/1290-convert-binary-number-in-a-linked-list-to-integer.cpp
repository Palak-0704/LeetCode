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
    int getDecimalValue(ListNode* head) {
        vector<int> temp;
        while(head !=NULL){
            temp.push_back(head->val);
            head= head->next;
        }
        int x=temp.size();
        int ans=0;
        int i=0;
        while(x>0){
            ans += temp[i]*pow(2,(x-1));
            i++;
            x--;
        }
        return ans;
    }
};