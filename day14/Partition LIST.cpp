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
    ListNode* partition(ListNode* head, int x) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                v.push_back(temp->val);
            }

            temp=temp->next;
        }
        ListNode* t2=head;
                while(t2!=NULL){
            if(t2->val>=x){
                v.push_back(t2->val);
            }
            
            t2=t2->next;
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* cur=dummy;
        for(int i=0;i<v.size();i++){
            dummy->next=new ListNode(v[i]);
            dummy=dummy->next;
        }
        return cur->next;
        
    }
};
