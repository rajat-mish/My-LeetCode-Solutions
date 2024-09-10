
class Solution {
public:
int gcd(int a,int b){
    if(a==0)return b;
    if(b==0)return a;
    if(a==b)return a;
    if(a>b) return gcd(a-b,b);
    return gcd(a,b-a);
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*temp=head;
        while(temp->next!=NULL){
            int a=gcd(temp->val,temp->next->val);
            ListNode*nn=new ListNode(a);
            nn->next=temp->next;
            temp->next=nn;
            temp=nn->next;
        }
        return head;
    }
};
