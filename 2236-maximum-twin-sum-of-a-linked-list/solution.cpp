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
    int pairSum(ListNode* head) {
        stack<int>st;
        int sz=0;
        ListNode*temp=head;
        while(temp){
            sz++;
            temp=temp->next;

        }
        int hf=sz/2;
        temp=head;
        while(hf--){
            st.push(temp->val);
            temp=temp->next;
        }
        int ans=INT_MIN;
        while(!st.empty() && temp!=NULL){
            int val=st.top()+temp->val;
            st.pop();
            temp=temp->next;
            ans=max(ans,val);
        }
        return ans;
    }
};
