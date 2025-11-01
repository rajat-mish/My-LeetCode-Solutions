// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* modifiedList(vector<int>& nums, ListNode* head) {
//         unordered_set<int>st;
//         for(auto ele:nums)st.insert(ele);
        
//            while(head!=NULL && st.find(head->val)!=st.end()){
//                 ListNode*tp=head;
//                  head=head->next;
              
           
//                 delete(tp);

//             }
//             if(!head)return NULL;
//                ListNode*temp=head;
     
//         while(temp->next!=NULL){
//                   if(st.find(temp->next->val)!=st.end()){
//                     ListNode*tp=temp->next;
//                  temp->next=temp->next->next;
//                  delete(tp);
                    
//                 }
//                 else   temp=temp->next;
             
//             }
          
        
      
//         return head;
//     }

// };


class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(nums.begin(), nums.end());
        while (head && st.count(head->val)) {
            head = head->next;
        }
        if (!head) return nullptr;
        ListNode* temp = head;
        while (temp->next) {
            if (st.count(temp->next->val)) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }
        return head;
    }
};

