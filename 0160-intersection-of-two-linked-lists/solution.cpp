/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int la=0;
        int lb=0;
         ListNode*temp=headA;
          ListNode*t=headB;
        while(temp!=NULL){
            la ++;
            temp=temp->next;
        }
        while(t!=NULL){
            lb ++;
            t=t->next;
        }
        temp=headA;
        t=headB;
        if(la==lb){
 while(temp!=t){
                temp=temp->next;
                t=t->next;
            }
            return temp;
        }
        if(la>lb){
            for(int i=1;i<=la-lb;i++){
                temp=temp->next;
            }
             while(temp!=t){
                temp=temp->next;
                t=t->next;
            }
            return temp;

        }
        else{
              for(int i=1;i<=lb-la;i++){
                t=t->next;
            }
            while(temp!=t){
                temp=temp->next;
                t=t->next;
            }
            return temp;
        }
    }
};
