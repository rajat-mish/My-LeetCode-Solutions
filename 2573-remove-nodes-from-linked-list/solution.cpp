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
    ListNode* removeNodes(ListNode* head) {
         ListNode*nn=new  ListNode(89);
          ListNode* temp=head;
           ListNode* t=nn;
        //   while(temp->next!=NULL){
        //       temp=temp->next;
        //   }
        //   t->next=temp;
        //   t=temp;
        //    ListNode* help=head;
        //    while(help->next!=temp){
        //        help=help->next;
        //    }
        //    if(help)

        stack<int>st;
           while(temp!=NULL){
               st.push(temp->val);
              temp=temp->next;
          }

          int mx=st.top();
        
           ListNode*r=new  ListNode(st.top());
             st.pop();
            ListNode* help=r;
           while(st.size()>0){
               if(st.top()>=mx){
                    ListNode*p=new  ListNode(st.top());
                    help->next=p;
                    help=help->next;
                    mx=st.top();
                    

               }
               st.pop();
           }
         return  reverseList(r);

    }
};
