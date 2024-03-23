/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //create duplicate copy with random pointer
        Node*dummy=new Node(0);
        Node*tempc=dummy;
        Node*temp=head;
        while(temp){
            Node*a=new Node(temp->val);
            tempc->next=a;
            tempc=tempc->next;
            temp=temp->next;
        }
        Node*a=head;
        Node*b=dummy->next;

        //make a map of <original,duplicate>
        unordered_map<Node*,Node*>m;
        Node*tempa=a;
        Node*tempb=b;
        while(tempa){
            m[tempa]=tempb;
            tempa=tempa->next;
            tempb=tempb->next;
        }
        for(auto x:m){
            Node*ori=x.first;
            Node*dup=x.second;
            if(ori->random!=NULL){
                Node*oriran=ori->random;
                Node*dupran=m[ori->random];
                dup->random=dupran;
            }
        }
        return b;
    }
};
