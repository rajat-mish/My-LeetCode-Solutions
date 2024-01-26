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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*s=head;
        ListNode*f=head->next;
        ListNode*c=new ListNode(8);
        ListNode*temp=c;
        int sum=0;
        while(f!=NULL){
            while(f->val!=0){
                sum+=f->val;
                f=f->next;
            }
            ListNode*n=new ListNode(sum);
            temp->next=n;
            temp=temp->next;
            sum=0;
            s=f->next;

            f=f->next;


        }
        return c->next;
    }
};
