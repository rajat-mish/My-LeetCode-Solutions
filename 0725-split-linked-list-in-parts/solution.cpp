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
        int n=0;
        ListNode*temp=head;
        while(temp){
           
            temp=temp->next;
             n++;
        }
        temp=head;
          vector<ListNode*>ans;
          int size=n/k;
          int r=n%k;
          while(temp){
                ListNode*c=new ListNode(67);
                ListNode*t=c;
                int s=size;
                if(r>0)s++;
                r--;
                for(int i=1;i<=s;i++){
                    t->next=temp;
                    temp=temp->next;
                    t=t->next;
                }
                t->next=NULL;
                ans.push_back(c->next);
          }
          if(ans.size()<k){
              int e=k-ans.size();
              for(int i=1;i<=e;i++){
                  ans.push_back(NULL);
              }
          }
          return ans;

    }
};
