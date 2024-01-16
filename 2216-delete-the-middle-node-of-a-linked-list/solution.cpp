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
    ListNode* deleteMiddle(ListNode* head) {
          ListNode*fast=head;
            ListNode*slow=head;
       if(head->next==NULL)return NULL;
       
            while( fast!=NULL  ){
                if(fast->next==NULL){
                    break;
                }
                fast=fast->next->next;
                slow=slow->next;
            }
              ListNode*temp=head;
              while(temp->next!=slow){
                  temp=temp->next;
              }
              temp->next=slow->next;
              return head;

    }
};
