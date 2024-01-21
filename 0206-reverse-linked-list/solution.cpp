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

          
          while(cur){
             nex=cur->next;
             cur->next=pre;
             pre=cur;
             cur=nex;
             //nex=nex->next;

          }
          return pre;

    }
};
