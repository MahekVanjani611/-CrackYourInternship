// Method 1:by manually counting and finding center for the list.
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
    int getCount(struct ListNode* head){
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        return count;
    
        //Code here
    
    }

    ListNode* middleNode(ListNode* head) {
        int l=getCount(head);
        int cnt=0;
        ListNode* temp=head;
        
        while(temp!=nullptr){
            cnt++;
            if(cnt==l/2+1){
                break;
            }
            temp=temp->next;
        }
        return temp;
    }
};


// TC:O(N)
// SC:O(1)

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Method 2:By using Tortoise and Hare Algorithm

class Solution {
public:
   


    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};

// TC:O(N)
// SC:O(1)
