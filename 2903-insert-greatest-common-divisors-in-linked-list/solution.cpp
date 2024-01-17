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
int hcf(int a,int b){
    if(b%a==0){
        return a;
    }
    return hcf(b%a,a);
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
         ListNode*temp=head;
         while(temp->next!=NULL){
             int a=temp->val;
             int b=temp->next->val;
             int c=hcf(a,b);
               ListNode*node=new ListNode(c);
               node->next=temp->next;
               temp->next=node;
              temp= node->next;
         }
         return head;
    }
};
