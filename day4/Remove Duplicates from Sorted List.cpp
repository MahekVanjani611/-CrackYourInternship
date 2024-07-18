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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> s;
        ListNode* temp=head;
        while(temp!=NULL){
            s.insert(temp->val);
            temp=temp->next;
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* temp2=dummy;
        for(auto it: s){
           dummy->next=new ListNode(it);
           dummy=dummy->next;

        }
return temp2->next;
        
    }
};
