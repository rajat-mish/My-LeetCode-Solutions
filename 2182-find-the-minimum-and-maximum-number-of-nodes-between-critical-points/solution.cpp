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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans;
        ListNode*temp=head;
        ListNode*ptemp=head;
        ListNode*start=NULL;
        ListNode*end=NULL;
        ListNode*st=NULL;
        int first=-1,last=-1;
        int mini=INT_MAX;
        int idx=1;


        while(temp){
            if(temp==head || temp->next==NULL){
                ptemp=temp;
                temp=temp->next;
                idx++;

            }

            else{
                if((temp->val>ptemp->val && temp->val>temp->next->val )||(
                    temp->val<ptemp->val && temp->val<temp->next->val
                )){
                    if(start==NULL){
                        start=temp;
                        st=temp;
                        first=idx;
                        last=idx;
                    }
                    else{
                        
                        mini=min(mini,idx-last);
                        st=temp;
                        end=temp;
                        last=idx;
                    }
                }
                ptemp=temp;
                temp=temp->next;
                idx++;
            }


        }
        if((first==-1 && last==-1)||(mini==INT_MAX)||(first==last))return {-1,-1};
     if(mini!=INT_MAX)   ans.push_back(mini);
     if(first!=last)   ans.push_back(last-first);
        return ans;
    }
};
