class Solution {
public:
    void revList(ListNode* &head) {
        ListNode *prev = NULL, *curr = head, *next;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;
        
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* head1 = head;
        ListNode* head2 = slow->next;
        slow->next = NULL;
        revList(head2);
        
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        while (head1 || head2) {
            if (head1) {
                curr->next = head1;
                curr = curr->next;
                head1 = head1->next;
            }
            if (head2) {
                curr->next = head2;
                curr = curr->next;
                head2 = head2->next;
            }
        }
        
        head = dummy->next;
        delete dummy; // Clean up dummy node
    }
};
