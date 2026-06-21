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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head)return NULL;
        ListNode*temp=head;
        for(int i=0;i<k;i++){
            if(!temp)return head;
            temp=temp->next;
        }
        ListNode*cur=head;
        ListNode*pre=NULL;
        ListNode*nex=NULL;
          int cnt=0;
        while(cur && cnt<k){
            nex=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nex;
            cnt++;
        }

        head->next=reverseKGroup(cur,k);
        return pre;
    }
};
