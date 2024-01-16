// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
      
//          ListNode*temp=head;
//          if(head==NULL)return NULL;
//          if(head->val==val){
//              temp=head->next;
//              head=temp;
//              if(head==NULL)return NULL;
//          }
         
//          while(temp->next!=NULL){
//              if(head->val==val){
//              temp=head->next;
//              head=temp;
//              if(head==NULL)return NULL;
//          }
//              if(temp!=NULL && temp->next->val==val){
//                  temp->next=temp->next->next;
//              }
//              else{
//              temp=temp->next;}
//          }
//          if(head->next==NULL && head->val==val){
//                head=NULL;
//                return head;
//            }
//          return head;
        
//     }
// };


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* temp = &dummy;

        while (temp->next != NULL) {
            if (temp->next->val == val) {
                ListNode* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
            } else {
                temp = temp->next;
            }
        }

        return dummy.next;
    }
};

