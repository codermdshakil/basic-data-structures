class Solution {
public:
    ListNode* middleNode(ListNode* head){ 
        if (head == NULL) {
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return slow;
            }
        }
        return slow;
    }
};