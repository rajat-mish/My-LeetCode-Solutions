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
ListNode*reverseList(ListNode*head){
    if(!head)return NULL;
    //if(head->next==NULL)return head;
    ListNode*pre=NULL;
    ListNode*cur=head;
    ListNode*nex=NULL;
    while(cur){
        nex=cur->next;
        cur->next=pre;
        pre=cur;
        cur=nex;
     
    }
    return pre;
}
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        ListNode*temp1=head1;
      ListNode*temp2=head2;
      int sum=0;
      int carry=0;
      ListNode*nn=new ListNode(0);
      ListNode*tp=nn;
      
      
      while(temp1 && temp2){
           ListNode*node=new ListNode((temp1->val + temp2->val+carry)%10);
           tp->next=node;
           tp=tp->next;
            carry=(temp1->val + temp2->val+carry)/10;
            temp1=temp1->next;
            temp2=temp2->next;
          
        //   if(temp1->data + temp2->data <=9){
        //      if(carry==0){
        //           Node*node=new Node((temp1->data + temp2->data));
        //       tp->next=node;
        //       tp=tp->next;
        //      }
        //      else{
                 
        //      }
        //   }
        //   else{
        //       if(carry==0){
        //             Node*node=new Node((temp1->data + temp2->data)%10);
        //             carry=(temp1->data + temp2->data)/10;
        //       }
        //       else{
                  
        //           Node*node=new Node((temp1->data + temp2->data)%10);
        //             carry=(temp1->data + temp2->data)/10;
        //       }
            
              
        //   }
      }
        while(temp1){
             ListNode*node=new ListNode((temp1->val +carry)%10);
           tp->next=node;
           tp=tp->next;
            carry=(temp1->val +carry)/10;
            temp1=temp1->next;
        }
        while(temp2){
             ListNode*node=new ListNode(( temp2->val+carry)%10);
           tp->next=node;
           tp=tp->next;
            carry=(temp2->val+carry)/10;
            temp2=temp2->next;
        }
        if(carry){
              ListNode*node=new ListNode((carry)%10);
           tp->next=node;
           tp=tp->next;
        }
    // ListNode*ans=reverseList(nn->next);
    // if(ans==NULL)return NULL;
    // while(ans!=nullptr && ans->val==0){
    //     ans=ans->next;
    // }
    // return ans;
    return nn->next;
        
    }
};
