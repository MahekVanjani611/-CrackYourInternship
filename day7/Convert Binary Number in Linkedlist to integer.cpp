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
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        int result=0;
        for(int i=n-1;i>=0;i--){
            cout<<(pow(2,n-i-1)*v[i])<<endl;
            result+=(pow(2,n-i-1)*v[i]);
        }
        return result;
        
        
    }
};
