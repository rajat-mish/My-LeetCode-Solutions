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
    ListNode* swapNodes(ListNode* head, int k) {
        int count=0;
         ListNode*temp=head;
           ListNode*t=head;
         while(temp!=NULL){
             temp=temp->next;
             count++;
         }
         temp=head;
         for(int i=1;i<k;i++){
             temp=temp->next;
         }
         for(int i=1;i<=count-k;i++){
             t=t->next;
         }
         int x=temp->val;
         temp->val=t->val;
         t->val=x;
         return head;

    }
};
