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
    int getCount(ListNode * head){
        int cntt=0;
        while(head!=nullptr){
            cntt++;
            head=head->next;
        }
        return cntt;
    }
    ListNode* removeNthFromEnd(ListNode *head, int k) {
        int n=getCount(head);
        
        if(k>n || k<=0){
            return head;
        }
        if (k == n) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
  
        int cnt=0;
        ListNode*temp=head;
        while(temp!=nullptr){
            cnt++;
            if(cnt==n-k){
                break;
            }
            temp=temp->next;
        }
 ListNode* neww = temp->next;
        temp->next = neww->next;
        delete neww;

        return head;
        
    }
};

// TC:O(N)
// SC:O(1)
