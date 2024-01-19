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
ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* a=list1;
        ListNode*b=list2;
        ListNode*c=new ListNode();
        ListNode*t=c;
        while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
            t->next=a;
            a=a->next;
            t=t->next;
        }
        else{
            t->next=b;
            b=b->next;
            t=t->next;
        }}
        if(a==NULL){
            t->next=b;
        }
        else{
            t->next=a;
        }
        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0)return NULL;
        while(arr.size()>1){
            ListNode*a=arr[arr.size()-1];
            arr.pop_back();
              ListNode*b=arr[arr.size()-1];
            arr.pop_back();
 ListNode*c=merge(a,b);
 arr.push_back(c);
            

        }
        return arr[0];
    }
};
