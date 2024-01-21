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
    bool isPalindrome(ListNode* head) {
         ListNode*c=new ListNode(9);
          ListNode*n=c;
           ListNode*temp=head;
           while(temp){
               ListNode*node=new ListNode(temp->val);
               n->next=node;
               temp=temp->next;
               n=n->next;
           }
         
           c=c->next;
           c=reverseList(c);

           temp=head;
           ListNode*t=c;
           while(temp!=NULL){
               if(temp->val!=t->val){
return false;
               }
               temp=temp->next;
               t=t->next;
           }

return true;
    }
};
