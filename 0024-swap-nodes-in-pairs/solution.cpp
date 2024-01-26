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
// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         if(head==NULL || head->next==NULL)return head;
//          ListNode*f=head->next;
//           ListNode*s=head;
//            ListNode*c=new  ListNode(9);
//             ListNode*t=c;
//           while(f->next!=NULL){
//             t->next=f;
//            if(t) t=t->next;
//             t->next=s;
//            if(t) t=t->next;

//            if(f->next!=NULL) f=f->next->next;
//            if(s->next!=NULL) s=s->next->next;
//           }
//           return c->next;
//     }
// };


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        while (head != nullptr && head->next != nullptr) {
            ListNode* first = head;
            ListNode* second = head->next;

            // Swap nodes
            prev->next = second;
            first->next = second->next;
            second->next = first;

            // Move to the next pair
            prev = first;
            head = first->next;
        }

        return dummy->next;
    }
};
