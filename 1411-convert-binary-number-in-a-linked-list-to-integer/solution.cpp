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
int btod(string s){
    int res=0;
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        char ch=s[i];
        int num=ch-'0';
        res+=num*1<<(n-i-1);  // (1 left shift x)==2^x hota hai
    }
    return res;
}
    int getDecimalValue(ListNode* head) {
        string s="";
        ListNode*temp=head;
        while(temp!=NULL){
          s+=to_string(temp->val);
            temp=temp->next;
        }
        return btod(s);
    }
};
