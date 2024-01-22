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
    void reorderList(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
      ListNode*b=reverseList(slow->next);
      ListNode*a=head;
      slow->next=NULL;  //break the list
     //merge two ll
     ListNode*c=new ListNode(78);
     ListNode*tc=c;
     ListNode*ta=a;
     ListNode*tb=b;
     while(ta && tb){
         tc->next=ta;
         tc=tc->next;
         ta=ta->next;

          tc->next=tb;
         tc=tc->next;
         tb=tb->next;
     }
     tc->next=ta;
     head= c->next;
      

    }
};
