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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*tm=head;
        int count=0;
        vector<ListNode*>v;
        while(temp!=NULL){
            count++;
            temp=temp->next;
            
        }

        if(count<=k){
            temp=head;
            while(temp!=NULL){
                ListNode*nn=new ListNode(temp->val);
             
                v.push_back(nn);
                temp=temp->next;
            }
            if(count<k){
                int t=k-count;
                while(t--){
                    v.push_back(NULL);
                }
            }
            return v;
        }
      else{
        int p=count%k;
        int q=count/k;
        temp=head;
        for(int i=0;i<p;i++){
           int c=q+1;
           ListNode*node=new ListNode(NULL);
           ListNode*tp=node;
           temp=tm;
           for(int j=0;j<c;j++){
            ListNode*nn=new ListNode(temp->val);
            node->next=nn;
            node=node->next;
            temp=temp->next;
           }
           tm=temp;
         v.push_back(tp->next);
        }

        for(int i=0;i<k-p;i++){
             int c=q;
           ListNode*node=new ListNode(NULL);
           ListNode*tp=node;
           ListNode*tem=tm;
           for(int j=0;j<c;j++){
            ListNode*nn=new ListNode(tem->val);
            node->next=nn;
            node=node->next;
            tem=tem->next;
           }
           tm=tem;
         v.push_back(tp->next);
        }




      }


        
        return v;
    }
};
