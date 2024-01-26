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
ListNode *middle(ListNode *head){
ListNode *fast = head->next;
ListNode *slow = head;
while(fast and fast->next){
fast = fast->next->next;
slow = slow->next;
}
return slow;
}
  ListNode* reverseList(ListNode* head) {
         ListNode*cur=head;
          ListNode*nex=NULL;
           ListNode*pre=NULL;
//use three pointers
          
          while(cur){
             nex=cur->next;
             cur->next=pre;
             pre=cur;
             cur=nex;
           

          }
          return pre;

    }
    int pairSum(ListNode* head) {
    
       ListNode*m=middle(head);
        ListNode*temp=reverseList(m);
       m->next=NULL;
        ListNode*t=head;
        int sum=INT_MIN;
        while(t&& temp){
        if(t->val+temp->val>sum){
            sum=t->val+temp->val;
        }
        t=t->next;
        temp=temp->next;
        }

       
        return sum;
    }
};
