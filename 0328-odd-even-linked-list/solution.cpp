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
    ListNode* oddEvenList(ListNode* head) {
         if (!head || !head->next) {
            return head; // No need to modify the list if it has 0 or 1 node
        }
         ListNode*oddh=head;
          ListNode*evenh=head->next;
           ListNode*odd=oddh;
            ListNode*even=evenh;
            while(even && even->next){
                odd->next=even->next;
                odd=odd->next;

                even->next=odd->next;
                even=even->next;
            }
            odd->next=evenh;
            return oddh;
        
    }
};
